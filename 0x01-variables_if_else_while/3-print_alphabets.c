#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	char t;
	char c;
	t = 'A';
	c = 'a';
	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	while (t <= 'Z')
	{
		putchar (t);
		t++;
	}
	putchar ('\n');
	return (0);
}
