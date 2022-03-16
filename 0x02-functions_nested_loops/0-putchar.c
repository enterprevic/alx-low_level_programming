#include <stdio.h>
/**
 * main -  prints putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}