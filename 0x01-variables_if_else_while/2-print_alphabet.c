#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints the alphabet in lowercase\n.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'++)
	{
		putchar(ch);
	}
	return (0);
}
