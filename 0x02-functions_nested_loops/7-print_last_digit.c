#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int y;

	if (n < 0)
	{
		y = -1 * (n % 10);
		_putchar(y + '0');
		return (y);
	}
	else
	{
		y = n % 10;
		_putchar(y + '0');
		return (y);
	}
}

