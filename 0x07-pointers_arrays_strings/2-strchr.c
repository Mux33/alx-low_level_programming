#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: the character to be located
 * @s: the string to be searched
 * Return: return to the first occurence of character c
 * if c not found - NULL
 */
char *_strchr(char *s, char c)
{
	int index;
	{
		for (index = 0; s[index] >= '\0'; index++)
		{
			if (s[index] == c)
				return (s + index);
		}
	}
	return ('\0');
}
