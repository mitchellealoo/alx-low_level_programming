#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0
 */

int main(void)
{
	int ones = '0';

	for (ones = '0' ; ones <= '9' ; ones++)
	{
		int tens = '0';

		for (tens = '0' ; tens <= '9' ; tens++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!((ones == tens) || (tens > ones)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
