
#ifndef COMMON_H_
#define COMMON_H_

#include <stdint.h>
#include "LPC17xx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* timer */
/* defines for Timer 0 and Timer 1 */
#define LPC_TIMER0  1
#define LPC_TIMER1  2
#define SBIT_MR0I    0
#define SBIT_MR0R    1
#define TIMER_ENABLE   0
#define PCLK_TIMER0  2
#define PCLK_TIMER1  4
#define TIME_IN_MILLI 5000
#define SOURCEID

void timer_initialise(void);

#endif /* COMMON_H_ */
