/*
 * LoRa.h
 *
 *  Created on: Oct 29, 2017
 *  CTI One Corporation released for Dr. Harry Li for CMPE 245 Class use ONLY!
 */

#ifndef LORA_H_
#define LORA_H_

/*
 * LoRa.h
 *
 *  Created on: Oct 29, 2017
 *  CTI One Corporation released for Dr. Harry Li for CMPE 245 Class use ONLY!
 */


#include <stddef.h>
#include "ssp.h"

//#define LORA_DEFAULT_SS_PIN    	10
#define LORA_DEFAULT_RESET_PIN 		2
#define LORA_DEFAULT_DIO0_PIN  		3



  int LoRabegin(long frequency);
  void end();
  int LoRabeginPacket(int implicitHeader);
  int LoRaendPacket();

  int parsePacket(int size );
  int packetRssi();
  float packetSnr();

  // from Print
  size_t writebyte(uint8_t byte);
  size_t write(const uint8_t *buffer, size_t size);

  // from Stream
  int available();
  int read();
  int peek();
  void flush();

  void onReceive(void(*callback)(int));

  void receive(int size);
  void idle();
  void sleep();

  void setTxPower(int level);
  void setFrequency(long frequency);
  void setSpreadingFactor(int sf);
  void setSignalBandwidth(long sbw);
  void setCodingRate4(int denominator);
  void setPreambleLength(long length);
  void setSyncWord(int sw);
  void crc();
  void noCrc();

  uint8_t random();



 // void dumpRegisters(Stream& out);
uint8_t readRegister(uint8_t address);

  void explicitHeaderMode();
  void implicitHeaderMode();

  void handleDio0Rise();


  void writeRegister(uint8_t address, uint8_t value);
  uint8_t singleTransfer(uint8_t address, uint8_t value);

  static void onDio0Rise();





void digitalWrite(uint8_t pin, uint8_t value);

void gpioInit();




#endif /* LORA_H_ */
