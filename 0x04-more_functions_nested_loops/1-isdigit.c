#include "main.h"
/**
* _isdigit - Code to check for digit
* @c: the var to be checked
* Return: 1 if digit and 0 if else
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
