/*********************************************************************
 |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
 ||||||||||||||||||->file    : bootjump.c 			||||||||||||||||||
 ||||||||||||||||||->author  : M.Fatih KESKİN		||||||||||||||||||
 ||||||||||||||||||->version : v.1.0 				||||||||||||||||||
 ||||||||||||||||||->date    : 29.07.22				||||||||||||||||||
 ||||||||||||||||||->brief   : bootjump		 		||||||||||||||||||
 ||||||||||||||||||->company : TBTK			 		||||||||||||||||||
 |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*********************************************************************/

/**************************INCLUDES**********************************/
#include "stm32l4xx.h"
#include "stdbool.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"
#include "stdarg.h"
#include "stdio.h"
#include "main.h"

/**************************DEFINES*************************************/

#define FLASH_JUMP_APP_1 0x08040000
#define FLASH_JUMP_APP_2 0x08080000
#define FLASH_BOOT 0x08000000





