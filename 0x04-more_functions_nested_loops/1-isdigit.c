#include "main.h"
/**
 *
 * _isdigit - checks if input is between 0 and 9
 * @c: agument
 * Return: returns  1 if agumentis a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
