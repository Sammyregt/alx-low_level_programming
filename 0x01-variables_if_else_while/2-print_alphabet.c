#include <stdio.h>

/**
 * main - print alhabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(alp[x]);
	}
	putchar('\n');
	return (0);
}
