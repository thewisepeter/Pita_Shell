#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be examined
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; ++i)
	{
		;
	}
	return (i);
}

/**
 * _strcpy - copies the string
 * @dest: destination string
 * @src: source string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * _strcmp - function that compares two strings
 *
 * @s1: string to be evaluated
 * @s2: string to be evaluated
 * Return: 0 or (s1[i] - s2[i])
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] !=  s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/**
 * _strncat - function that concatenates two strings
 * use at most n bytes from src
 * @dest: destination
 * @src: source string
 * @n: bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0' && src_len < n)
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}
	return (dest);
}

/**
 * _strdup - duplicates a string in a new mem space
 * @str: string to be duplicated
 *
 * Return: char pointer to new string (success) NULL (fail)
 */
char *_strdup(char *str)
{
	char *str_copy;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	str_copy = malloc(sizeof(char) * j + 1);
	if (!str_copy)
		return (NULL);

	while (str[i] != '\0')
	{
		*(str_copy + i) = *(str + i);
		i = i + 1;
	}
	*(str_copy + j) = '\0';
	return (str_copy);
}
