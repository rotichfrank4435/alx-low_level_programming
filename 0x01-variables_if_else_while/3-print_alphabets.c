#include <stdio.h>

/**
 * main - program that prints alphabet in lowercase and uppercase
 *
 * Return: 0 when successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
