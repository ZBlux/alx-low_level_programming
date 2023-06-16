#include <stdio.h>
/**
 *main- the entry point
 *
 *Description: Hexadecimal.
 *
 *Return: 0
 */
int main(void)
{
	char cd, num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (cd = 'a'; cd <= 'f'; cd++)
	{
		putchar(cd);
	}
	putchar('\n');
	return (0);
}
