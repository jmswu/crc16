#ifndef __crc16_h__
#define __crc16_h__

#include <stdint.h>

#define INITIAL_CRC_CC3         0x1D0F
#define CRC_CCITT_POLY			0x1021 	//CRC-CCITT, polynormial 0x1021.

uint16_t CRC16(uint8_t *ptr, int count, uint16_t initCRC);

#endif
