#include "operations.h"

/**
 * add - function to add two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - function to subtract two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - function to multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - function to add divide integers
 * @a: first integer
 * @b: second integer
 * Return: result or -1
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (-1);
	}
}
/**
 * mod - function to find the remainder of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder or -1
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (-1);
	}
}
