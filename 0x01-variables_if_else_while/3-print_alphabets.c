#include <stdio.h>
/**
 * main - Entry point for lowercase and uppercase alphabets
 * Description: 'Print the alphabets in lowercase and upppercase'
 * Return:  Always 0(Success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
	putchar(n);
	}
	while (m <= 90)
	{
	putchar(m);
	}
	putchar('\n');
	return (0);
}
