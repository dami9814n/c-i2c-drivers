#ifndef I2C_COMMON_H_INCLUDED
#define I2C_COMMON_H_INCLUDED

#include <stdint.h>

#define I2C_READ_ADDR(x)  (x | 0x01)
#define I2C_WRITE_ADDR(x) (x & 0xFE)

typedef struct {
    uint8_t device_address;
    int (*i2c_transfer)(uint8_t devaddr, uint8_t *writebuf, int writelen, uint8_t *readbuf, int readlen);
    void (*ack_polling)(uint8_t devaddr);
} i2c_driver_t;

#endif