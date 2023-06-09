#include "main.h"
/**
 * flip_bits - number of bits you would need to flip.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int y, x;

	y = 0;
	result = 1;
	difference = n ^ m;
	for (x = 0; x < (sizeof(unsigned long int) * 8); x++)
	{
		if (result == (difference & result))
			y++;
		result <<= 1;
	}

	return (y);
}
