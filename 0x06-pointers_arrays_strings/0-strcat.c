#include "main.h"
/**
 * _strcat -> concatenates two strings using at most
 * an inputted number of byte from src
 * @dest: The string to be appended on
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int index = x, dest_len = 0;

	while (dest[index])
		dest_len++;
	for (index = 0, src[index] && index < n, index++)
		dest[dest_len++] = src[index];
	return (dest);
}
