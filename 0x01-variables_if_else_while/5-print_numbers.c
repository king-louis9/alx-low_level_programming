#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints all single digit numbers of base10'
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}
