#include <stdio.h>
#include "main.h"

/**
 * main: Entry
 * Description: it prints the word _putchar, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int word;

	for (i = 0; i < 8; i++)
		putchar(word[i]);

	putchar('\n');
	return (0);
}
