/*
 * Application.c
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */

#include "Platform.h"
#include "Application.h"
#include "LED.h"
#include "WAIT1.h"

void APP_Start(void) {
  PL_Init();
  /* init: turn off */
  for(;;) {
    LED1_Neg();
    WAIT1_Waitms(100);
    LED2_Neg();
    WAIT1_Waitms(100);
    LED3_Neg();
    WAIT1_Waitms(100);
  }

  for(;;) {
    /* wait */
  }
}


