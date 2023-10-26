#include "main.h"

/**
 * get_bit -The value of  bit is returned  at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_valu;

	if (index > 63)
		return (-1);

	bit_valu = (n >> index) & 1;

	return (bit_valu);
}
