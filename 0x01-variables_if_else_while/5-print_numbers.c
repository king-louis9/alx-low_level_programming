#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints all single digit numbers of base10'
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
