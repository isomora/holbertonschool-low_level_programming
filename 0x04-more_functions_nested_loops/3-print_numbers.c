#include "holberton.h"
/**
 * print_numbers - print numbers form 0 -9
 * Return: the respective sequence
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
