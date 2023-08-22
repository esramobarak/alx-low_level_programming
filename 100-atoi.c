#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_atoi- a function that convert a string to an integer.
 *@s: String input
 *Return: Void
 */
int _atoi(char *s)
{
	int type;
	unsigned int x;
	char *temp;

	type = 1;
	x = 0;
	temp = s;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if  (*temp == '-')
			type *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			x = x * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (x * type);
}
