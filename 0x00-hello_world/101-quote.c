#include <unistd.h>
#include <stdio.h>

/**
 * main - Program that prints an exact sentence and a date
 * followed by a line, to the standard error
 *
 * Return: 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
