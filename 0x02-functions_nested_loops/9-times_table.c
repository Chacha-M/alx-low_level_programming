#include "main.h"
/**
 * times_table-prints the 9 times table
 */

void times_table(void)
{
	int columns, rows, result;

	for (rows = 0; rows <= 9; rows++)
	{
		for (columns = 0; columns <= 9; columns++)
		{
			result = (rows * columns);

			if (columns == 0)
			{
				putchar('0' + result);
			}
			else if (result <= 9)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar('0' + result);
			}
			else if (result > 9)
			{
				putchar(',');
				putchar(' ');
				putchar('0' + (result / 10));
				putchar('0' + (result % 10));
			}
		}
		putchar('\n');
	}
}
