#include"holberton.h"
/**
 * print_to_98 - prints natural numbers starting from n.
 * @n: int
 * Return:0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		   _printf("%d, ", n);
		    _printf("%d\n", 98);
	}
	else
	{
	        for (n = n; n > 98; n--)
		    _printf("%d, ", n);
		   _printf("%\n", 98);
	}
}		    
