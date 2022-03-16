#include <stdio.h>
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
        puts(text[i]);
        i++;
    }
    puts('\n');

    return 0;
}