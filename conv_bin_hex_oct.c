#include "main.h"
/**
 * binary_oct_hex_convert - convert a number into binary, octal or hexadecimal
 * @numero: Its the number given to convert
 * @base: is the base which the number will be divided with; binary 2; octal 8; hexadecima 16.
 *Return: The number of characteres printed
 */	
int binary_oct_hex_convert(unsigned int number, int base, int flag)
{
	char hexUpcase[] = "0123456789ABCDEF";
	char hexLowcase[] = "0123456789abcdef";
	char array[2021];
	char *ptr;
	int i = 1000, j = 0;

	ptr = &array[1000];
	*ptr = '\0';

	do {
		if (flag != 0)
			*--ptr = hexUpcase[number % base];
		else
			*--ptr = hexLowcase[number % base];
		number = number / base;
		i--;
	} while (number != 0);

	for (j = i; array[j] != 0; j++)
	{
		_putchar(array[j]);
	}
	return(1000 - i);
}
