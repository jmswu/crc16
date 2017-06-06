#include "crc16.h"


uint16_t CRC16(uint8_t *ptr, int count, uint16_t initCRC)
{
    uint16_t crc;
    uint8_t i;

    crc = initCRC;
    while(--count >= 0 )
    {
        crc = crc ^ ((uint16_t) (*ptr++ << 8));
        for(i = 0; i < 8; i++)
        {
            if( crc & 0x8000 )
            {
                crc = (crc << 1) ^ CRC_CCITT_POLY;
            }
            else
            {
                crc = crc << 1;
            }
        }
    }

    return crc;
}
