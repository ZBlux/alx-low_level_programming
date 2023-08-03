nclude "main.h"

/**
 *_atoi - converts chars to integer
 *
 *@c: char to convert
 *
 *Return: converted integer
 */
unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 *_strlen - gets the length of a string
 *
 *@str: string input
 *
 *Return: string length
 */
unsigned int _strlen(const char *str)
{
	unsigned int index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}

/**
 *binary_to_uint- function that converts a binary to uns int
 *
 *@b: pointer to 0 or 1
 *
 *Return: 0 or uns int number
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0, base2 = 1,  num = 0;

	if (b == NULL)
		return (0);
	for (index = _strlen(b) - 1; index >= 0; index--)
	{
		num = _atoi(b[index]);

		if (num != 0 && num != 1)
			return (0);

		result += num * base2;
		base2 *= 2;
	}
	return (result);
}
