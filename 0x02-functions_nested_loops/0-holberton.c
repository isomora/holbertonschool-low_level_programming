#include "holberton.h"
/**
 * main - print string using own header and function
 * int: type varianle used
 * Return:0
*/
int main(void)
{
	char hp[] = "Holberton";

	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar(hp[i]);
	}
	_putchar('\n');
	return (0);
}
