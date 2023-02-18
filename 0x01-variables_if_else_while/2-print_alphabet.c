#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints the alphabet in lowercase\n.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n')
	return (0);
}
