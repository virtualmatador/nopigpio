#include "pigpio.h"

uint32_t cfg_internals_ = 0;

uint32_t gpioCfgGetInternals(void)
{
    return cfg_internals_;
}

int gpioCfgSetInternals(uint32_t cfgVal)
{
    cfg_internals_ |= cfgVal;
    return 0;
}

int gpioCfgClock(unsigned cfgMicros, unsigned cfgPeripheral, unsigned cfgSource)
{
    return 0;
}

int gpioInitialise(void)
{
    return 0;
}

void gpioTerminate(void)
{
}

int gpioSetMode(unsigned int gpio, unsigned int mode)
{
    return 0;
}

int gpioSetPullUpDown(unsigned int gpio, unsigned int pud)
{
    return 0;
}

int gpioSetISRFuncEx(unsigned int gpio, unsigned int edge, int timeout,
    gpioISRFuncEx_t f, void *userdata)
{
    return 0;
}

int gpioWrite(unsigned int gpio, unsigned int level)
{
    return 0;
}

int gpioRead (unsigned int gpio)
{
    return 0;
}

int i2cOpen(unsigned int i2cBus, unsigned int i2cAddr, unsigned int i2cFlags)
{
    return 0;
}

int i2cClose(unsigned int handle)
{
    return 0;
}

int i2cWriteByte(unsigned int handle, unsigned int bVal)
{
    return 0;
}

uint32_t gpioTick()
{
    return 0;
}

int gpioSetAlertFuncEx(unsigned user_gpio, gpioAlertFuncEx_t f, void *userdata)
{
    return 0;
}

int gpioSetWatchdog(unsigned int user_gpio, unsigned int timeout)
{
    return 0;
}
