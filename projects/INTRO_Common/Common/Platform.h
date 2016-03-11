/*
 * Platform.h
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */

#ifndef SOURCES_INTRO_COMMON_PLATFORM_H_
#define SOURCES_INTRO_COMMON_PLATFORM_H_

#include <stdint.h> /* types as uint8_t used in project */
#include "PE_Types.h" /* common Processor Expert types: bool, NULL, ... */
#include "Platform_Local.h" /* local project configuration, present in each project (FRDM, Robot) */

/* check local platform configuration */
#define PL_CONFIG_HAS_EVENTS		(1)

#if PL_LOCAL_CONFIG_BOARD_IS_ROBO
  #define PL_CONFIG_BOARD_IS_FRDM   (0)
  #define PL_CONFIG_BOARD_IS_ROBO   (1)
#elif PL_LOCAL_CONFIG_BOARD_IS_FRDM
  #define PL_CONFIG_BOARD_IS_FRDM   (1)
  #define PL_CONFIG_BOARD_IS_ROBO   (0)
#else
  #error "One board type has to be defined in Platform_Local.h!"
#endif

#define PL_CONFIG_TEST_DRIVERS  (1) /* if enabled, will perform driver tests */

/* LED driver configuration */
#define PL_CONFIG_HAS_LED       (1) /* if enabled, LEDs are available */
#if PL_CONFIG_BOARD_IS_FRDM
  #define PL_CONFIG_NOF_LED     (3) /* number of LEDs */
#elif PL_CONFIG_BOARD_IS_ROBO
  #define PL_CONFIG_NOF_LED     (2) /* number of LEDs */
#endif

/* interfaces */
void PL_Init(void); /* driver initialization */
void PL_Deinit(void); /* driver deinitialization */

#endif /* SOURCES_INTRO_COMMON_PLATFORM_H_ */
