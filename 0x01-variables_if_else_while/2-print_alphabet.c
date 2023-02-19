Project 0x01. C - Variables ,if, else, while



Task 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* Description: prints  if a number is positive or negative.
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive ", n);
}
else if (n == 0)
{
printf("%d is zero ", n);
}
else if (n < 0)
{
printf("%d is negative ", n);
}
return (0);
}




Task 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: checks on the last digit of the assigned var
* Return: Always 0 (success)
*/
int main(void)
{
int n, m;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5 ", n, m);
}
else if (m < 6 && m != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0 ", n, m);
}
else
{
printf("Last digit of %d is %d and is 0 ", n, m);
}
return (0);
}




Task 2
#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Description: prints the alphabet in lowercase 
* Return: Always 0 (success)
*/
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar(' ');
return (0);
}
