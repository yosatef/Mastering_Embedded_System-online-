#include "UART.h"

unsigned char String_buffer[100] = "Learn-in-depth:<Youstina>";

void main (void)
{
	
	 Uart_Send_String (String_buffer);

}
