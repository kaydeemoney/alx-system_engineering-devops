#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *              Numbers must be separated by ", " and in ascending order.
 *              The two digits must be different, and 01 and 10 are considered the same combination.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 0;
while (num1 <= 8)
{
int num2 = num1 + 1;
while (num2 <= 9)
{
putchar(num1 + '0');
putchar(num2 + '0');
if (num1 != 8)
{
putchar(',');
putchar(' ');
}
num2++;
}
num1++;
}
putchar('\n');

return (0);
}
