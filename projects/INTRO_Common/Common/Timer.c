/**
 * \file
 * \brief Timer driver
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module implements the driver for all our timers.
  */

#include "Platform.h"
#if PL_CONFIG_HAS_TIMER
#include "Timer.h"
#include "Event.h"

#define BLINK_PERIOD_MS	2000

void TMR_OnInterrupt(void) {
  /* this one gets called from an interrupt!!!! */
  /*! \todo Add code for a blinking LED here */
	static int cntr = 0;

	cntr++;

	if(cntr % (BLINK_PERIOD_MS / TMR_TICK_MS) == 0)
	{
		LEDPin1_NegVal();
	}
}

void TMR_Init(void) {
}

void TMR_Deinit(void) {
}

#endif /*PL_HAS_TIMER*/
