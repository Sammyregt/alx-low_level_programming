#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of command line arguments
 * @argv: array that contains the line argument
 *
 * Return: 0 - success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	prinf("%d\n", argc - 1);
	return (0);
}
