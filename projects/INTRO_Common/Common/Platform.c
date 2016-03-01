/*
 * Platform.c
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */


#include "Platform.h"
#if PL_CONFIG_HAS_LED
  #include "LED.h"
#endif

void PL_Deinit(void) {
#if PL_CONFIG_HAS_LED
  LED_Deinit();
#endif
}

void PL_Init(void) {
#if PL_CONFIG_HAS_LED
  LED_Init();
#endif
}

