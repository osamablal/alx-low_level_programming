#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
If (n > 0)
{
_putchar(43);
Return (1);
}
Else if (n < 0)
{
_putchar(45);
Return (-1);
}
Else
{
_putchar(48);
Return (0);
}
