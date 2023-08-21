#include "main.h"

/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */

void rev_string(char *s)
{
	int strLength, i, j;
	char t;

	for (strLength = 0; s[strLength] != '\0';)
		strLength++;

	for (i = 0, j = strLength - 1; j >= 0 && i < j; j--, i++)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
