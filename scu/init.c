/**
 * Quadrofly Software (http://quadrofly.ni-c.de)
 *
 * @file 	init.c
 * @brief 	Global initialization file.
 * @author 	Willi Thiel (wthiel@quadrofly.ni-c.de)
 * @date 	Mar 6, 2012
 */
#include "main.h"
#include "uart.h"

/**
 * Quadrofly initialization
 */
void init_qfly() {

	/*
	 * Initialize UART
	 */
#ifdef UART_AVAILABLE
	uart_init();
#endif

}
