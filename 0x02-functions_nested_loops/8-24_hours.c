#include "main.h"
/**
 * jack_bauer-prints every minute of the day
 */
void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;

	do {
		while (min < 60)
		{
			_putchar('0' + (hrs / 10));
			_putchar('0' + (hrs % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		min = 0;
		hrs += 1;
	} while (hrs < 24);
}

