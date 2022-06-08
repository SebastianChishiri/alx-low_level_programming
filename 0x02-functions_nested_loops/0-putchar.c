#include "stdio.h"
/**
 * main -entery point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '1';

	for (ch = '1'; ch <= '9'; ch++)
	{
		putchar(ch);
		ch++;
	}
	 putchar('\n');

	return (0);
}
