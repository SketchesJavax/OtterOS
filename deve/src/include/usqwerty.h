/* # Usqwerty #
 *
 * ## Description ##
 * Contains scan code character set for converting
 * input codes to characters.
 *
 * ## Info ##
 * Created 14/03/18
 * Format C++ header
 * Written by JavaxCosten
 *
 * ## Copyright ##
 * Copyright (C) 2018 OtterOS Project - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the LICENSE, found in the top level directory.
 */

char lowercase2[256] = {
//0x_0  0x_1  0x_2  0x_3  0x_4  0x_5  0x_6  0x_7  0x_8  0x_9  0x_A  0x_B  0x_C  0x_D  0x_E  0x_F
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '\t', '`',  0x00, // 0x0_
  0x00, 0x00, -4,   0x00, 0x00, 'q',  '1',  0x00, 0x00, 0x00, 'z',  's',  'a',  'w',  '2',  0x00, // 0x1_
  0x00, 'c',  'x',  'd',  'e',  '4',  '3',  0x00, 0x00, ' ',  'v',  'f',  't',  'r',  '5',  0x00, // 0x2_
  0x00, 'n',  'b',  'h',  'g',  'y',  '6',  0x00, 0x00, 0x00, 'm',  'j',  'u',  '7',  '8',  0x00, // 0x3_
  0x00, ',',  'k',  'i',  'o',  '0',  '9',  0x00, 0x00, '.',  '/',  'l',  ';',  'p',  '-',  0x00, // 0x4_
  0x00, 0x00, '\'', 0x00, '[',  '=',  0x00, 0x00, -2,   -3,   '\n', ']',  0x00, '\\', 0x00, 0x00, // 0x5_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '\b', 0x00, 0x00, '1',  0x00, '4',  '7',  0x00, 0x00, 0x00, // 0x6_
  '0',  '.',  '2',  '3',  '6',  '8',  -1,   -5,   0x00, '+',  '3',  '-',  '*',  '9',  -6,   0x00, // 0x7_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x8_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x9_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xA_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xB_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xC_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xD_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xE_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  // 0xF_
};

char lowercasex[256] = {
//0x_0  0x_1  0x_2  0x_3  0x_4  0x_5  0x_6  0x_7  0x_8  0x_9  0x_A  0x_B  0x_C  0x_D  0x_E  0x_F
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '\t', '`',  0x00, // 0x0_
  0x00, 0x00, -4,   0x00, 0x00, '/',  0x00,  0x00, 0x00, 0x00, 'z',  's',  'a',  't',  '\n',  0x00, // 0x1_
  0x00, '\\',  '.',  ',',  0x00,  0x00,  '3',  0x00, 0x00, ' ',  'e',  'f',  '[',  'r',  'f',  0x00, // 0x2_
  0x00, 'n',  'b',  0x00,  'g',  'y',  '6',  0x00, 0x00, 0x00, 'm',  '4',  '5',  '7',  '8',  0x00, // 0x3_
  0x00, '1',  '9',  -1,  '8',  '0',  '9',  0x00, 0x00, '.',  '/',  'l',  ';',  'p',  '-',  0x00, // 0x4_
  0x00, 0x00, '\'', 0x00, '[',  '=',  0x00, 0x00, -2,   -3,   'i', 's',  0x00, 'v', 0x00, 0x00, // 0x5_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '\b', 0x00, 0x00, 'b',  0x00, 0x00,  '7',  0x00, 0x00, 0x00, // 0x6_
  'g',  'p',  ' ',  '3',  '6',  '-',  0x00,   -5,   0x00, '+',  '3',  '-',  'j',  '9',  -6,   0x00, // 0x7_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x8_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x9_
  0x00, 'a', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xA_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xB_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xC_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xD_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xE_
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  // 0xF_
};

signed char lowercase1[256] = {
	//0x_0  0x_1  0x_2  0x_3  0x_4  0x_5  0x_6  0x_7  0x_8  0x_9  0x_A  0x_B  0x_C  0x_D  0x_E  0x_F
	  0x00, -1,   '1',  '2',  '3',  '4',  '5',  '6',  '7',  '8',  '9',  '0',  '-',  '=',  '\b', '\t', // 0x0_
	  'q',  'w',  'e',  'r',  't',  'y',  'u',  'i',  'o',  'p',  '[',  ']',  '\n', 0x00, 'a',  's',  // 0x1_
	  'd',  'f',  'g',  'h',  'j',  'k',  'l',  ';',  '\'', '`',  -4,   '\\', 'z',  'x',  'c',  'v',  // 0x2_
	  'b',  'n',  'm',  ',',  '.',  '/',  -3,   '*',  0x00, ' ',  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x3_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '7',  '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',  // 0x4_
	  '2',  '3',  '0',  '.',  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x5_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x6_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x7_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x8_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x9_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xA_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xB_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xC_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xD_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xE_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  // 0xF_
};

signed char uppercase1[256] = {
	//0x_0  0x_1  0x_2  0x_3  0x_4  0x_5  0x_6  0x_7  0x_8  0x_9  0x_A  0x_B  0x_C  0x_D  0x_E  0x_F
	  0x00, -1,   '!',  '@',  '£',  '$',  '%',  '^',  '&',  '*',  '(',  ')',  '_',  '+',  '\b', '\t', // 0x0_
	  'Q',  'W',  'E',  'R',  'T',  'Y',  'U',  'I',  'O',  'P',  '{',  '}',  '\n', 0x00, 'A',  'S',  // 0x1_
	  'D',  'F',  'G',  'H',  'J',  'K',  'L',  ':',  '\"', '~',  -4,   '|', 'Z',  'X',  'C',  'V',  // 0x2_
	  'B',  'N',  'M',  '<',  '>',  '\?',  -3,   '*',  0x00, ' ',  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x3_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '7',  '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',  // 0x4_
	  '2',  '3',  '0',  '.',  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x5_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x6_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x7_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x8_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x9_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xA_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xB_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xC_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xD_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xE_
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  // 0xF_
};
