#ifndef SHT3_H_INCLUDED
#define SHT3_H_INCLUDED

#define SHT3_DEFAULT_ADDRESS (0x44 << 1)

#include "../../i2c_common/i2c_common.h"

typedef enum {
    SHT3_LOW_REPEATABILITY = 0,
    SHT3_MEDIUM_REPEATABILITY,
    SHT3_HIGH_REPEATABILITY,
} sht3_repeatability_t;

int sht3_start_single_acquisition(i2c_driver_t driver, int clock_stretching, sht3_repeatability_t repeatibility);
int sht3_read_acquisition(i2c_driver_t driver, double *temperature, double *humidity);

#endif