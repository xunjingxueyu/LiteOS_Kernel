#ifndef _LOS_BSP_UART_H
#define _LOS_BSP_UART_H

#include <stdio.h>
#include <string.h>

extern void LOS_EvbUartInit(void);
extern void LOS_EvbUartWriteByte(char c);
extern void LOS_EvbUartWriteStr(const char* str);
extern void LOS_EvbUartReadByte(char* c);

#endif

