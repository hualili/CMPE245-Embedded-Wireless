/*
 * ssp.h
 *
 *  Created on: Oct 29, 2017
 *  CTI One Corporation released for Dr. Harry Li for CMPE 245 Class use ONLY!
 */

#ifndef SSP_H_
#define SSP_H_



#include <stdint.h>
#include "LPC17xx.h"
#define CHIP_SELECT()			(LPC_GPIO0->FIOCLR = (1<<6))
#define CHIP_DESELECT()			(LPC_GPIO0->FIOSET = (1<<6))
// Macros
/* SSP Status register */
#define SSP1_PCONP_ENABLE	((uint32_t)(1 << 10))
#define SSP_STAT_TFE  		((uint32_t)(1 << 0))		/**< TX FIFO Empty */
#define SSP_STAT_TNF  		((uint32_t)(1 << 1))		/**< TX FIFO not full */
#define SSP_STAT_RNE  		((uint32_t)(1 << 2))		/**< RX FIFO not empty */
#define SSP_STAT_RFF 		((uint32_t)(1 << 3))		/**< RX FIFO full */
#define SSP_STAT_BSY 		((uint32_t)(1 << 4))		/**< SSP Busy */

/* SSP CR0 register */
#define SSPCR0_DSS		(1 << 0)
#define SSPCR0_FRF		(1 << 4)
#define SSPCR0_SPO		(1 << 6)
#define SSPCR0_SPH		(1 << 7)
#define SSPCR0_SCR		(1 << 8)

/* SSP CR1 register */
#define SSPCR1_LBM		(1 << 0)
#define SSPCR1_SSE		(1 << 1)
#define SSPCR1_MS		(1 << 2)
#define SSPCR1_SOD		(1 << 3)

/* SSP Interrupt Mask Set/Clear register */
#define SSPIMSC_RORIM	(1 << 0)
#define SSPIMSC_RTIM	(1 << 1)
#define SSPIMSC_RXIM	(1 << 2)
#define SSPIMSC_TXIM	(1 << 3)

/* SSP1 Masked Interrupt register */
#define SSPMIS_RORMIS	(1 << 0)
#define SSPMIS_RTMIS	(1 << 1)
#define SSPMIS_RXMIS	(1 << 2)
#define SSPMIS_TXMIS	(1 << 3)

/* SSP1 Interrupt Status register */
#define SSPRIS_RORRIS	(1 << 0)
#define SSPRIS_RTRIS	(1 << 1)
#define SSPRIS_RXRIS	(1 << 2)
#define SSPRIS_TXRIS	(1 << 3)

/* SSP1 Interrupt clear register */
#define SSPICR_RORIC	(1 << 0)
#define SSPICR_RTIC		(1 << 1)

// Function Prototypes
void SSP1Init();
uint8_t sspTransfer(uint8_t *buf, uint32_t length);
uint8_t ssp1Send(uint8_t *buf, uint32_t length);
uint8_t ssp1Transfer(uint8_t dataByte);



#endif /* SSP_H_ */
