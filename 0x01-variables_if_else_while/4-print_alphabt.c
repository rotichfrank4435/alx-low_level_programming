#include <stdio.h>

/**
 * main - prints alphabets in lowercase except q and e
 *
 * Return: akways 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
