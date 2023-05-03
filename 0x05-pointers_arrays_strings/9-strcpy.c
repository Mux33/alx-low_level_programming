#include "main.h"

/**
 * *_strcpy - a function that copies pointed
 * by src
 * @dest: copy to src
 * @src: copy from dest
 * Description: copy the string pointed to by pointer to 'src'
 * to the buffer pointed to by 'dest'
 * Return: return pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
