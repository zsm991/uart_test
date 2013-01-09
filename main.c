//#include <stm32f10x.h>
//#include "zuart.h"
//#include "vldiscovery.h"
#include "init.h"


int main(void)
{
	zinit();  // Initialize peripheria


	while (1);

	{
		send_to_uart('H');
		send_to_uart('e');
		send_to_uart('l');
		send_to_uart('l');
		send_to_uart('o');
		send_to_uart(' ');
		send_to_uart(':');
		send_to_uart(')');
		send_to_uart('\n');

	}
}
