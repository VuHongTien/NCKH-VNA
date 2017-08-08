#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <inc/hw_types.h>
#include <inc/hw_memmap.h>
#include <driverlib/sysctl.h>
#include <utils/uartstdio.h>

#include "Button_Control.h"
#include "UART_Driver.h"
#include "ADC_Driver.h"
#include "Led.h"
#include "SPI_Driver.h"
#include "LCD5110.h"
#include "delay.h"