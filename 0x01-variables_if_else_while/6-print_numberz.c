#include <stdio.h>
/**
 *main- the entry point
 *
 *Description: print number zero to 9 .
 *
 *Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
