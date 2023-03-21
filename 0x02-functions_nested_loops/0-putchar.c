#include <stdio.h>

/**
 * main: Entry
 * Discription: print _putchar
 * Return: 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(word[i]);
	putchar('\n');

	return (0);
}
