#include "main.h"
/**
 * main -  prints putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char text[8] = "_putchar";
int i = 0;

while (i < 8)
{
_putchar(text[i]);
i++;
}
_putchar('\n');

return (0);
}

