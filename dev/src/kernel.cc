#include <stddef.h> //we can use it: it doesnt use any platform-related api functions
#include <stdint.h> //include it to get int16_t and some integer types
#include <stdbool.h>
#include "include/terminal.cc"

#define PIC1 0x20
#define PIC2 0xA0

#define ICW1 0x11
#define ICW4 0x01

static inline uint8_t inb(uint16_t port)
{
    uint8_t ret;
    asm volatile ( "inb %1, %0"
                   : "=a"(ret)
                   : "Nd"(port) );
    return ret;
}

void outb( unsigned short port, unsigned char val )
{
   asm volatile("outb %0, %1" : : "a"(val), "Nd"(port) );
}

void init_pics(int pic1, int pic2)
{
   /* send ICW1 */
   outb(PIC1, ICW1);
   outb(PIC2, ICW1);

   /* send ICW2 */
   outb(PIC1 + 1, pic1);   
   outb(PIC2 + 1, pic2);   

   /* send ICW3 */
   outb(PIC1 + 1, 4);   
   outb(PIC2 + 1, 2);

   /* send ICW4 */
   outb(PIC1 + 1, ICW4);
   outb(PIC2 + 1, ICW4);

   /* disable all IRQs */
   outb(PIC1 + 1, 0xFF);
}

/* only valid for 800x600x32bpp */
static void putpixel(unsigned char* screen, int x,int y, int color) {
    unsigned where = x*4 + y*3200;
    screen[where] = color & 255;              // BLUE
    screen[where + 1] = (color >> 8) & 255;   // GREEN
    screen[where + 2] = (color >> 16) & 255;  // RED
}

//extern void setPixel(void);

void setPixel () {
	asm ("mov %ah, 0x0C");
	asm ("mov %al, 0x13");
	asm ("int $0x10");

	asm ("mov %ah, 0x0C");
	asm ("mov %bh, 0");
	asm ("mov %dx, 5");
	asm ("mov %cx, 5");
	asm ("mov %al, 0x04");
	asm ("int $0x10");
}

extern "C" void kernel_main(void) {
	tInitialize();
	println("Well... this is OtterOS so far!");
	println("Warning! This OS melts PHP programmers.");
	println("");
	char block = '█';
	tFillLineWithChar (block);
  char c = 0;
init_pics(0x20, 0x28);
do
{

if(inb(0x60)!=c) //PORT FROM WHICH WE READ
{
    c = inb(0x60);
    if(c>0)
        {

            println(c); //print on screen

        }
    }


}
while(c!=1); // 1= ESCAPE
	//setPixel();
}
