#include "main.h"

/**
 *_strstr- function that locates a substring
 *
 *@haystack: string
 *@needle: string
 *
 *Return: haystack + i or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystackhaystack[i] != '\0'; i++)
	{
		k = i;
		for (j = 0; needle[j] != '\0' && haystack[k] != '\0'; j++)
		{
			if (haystack[k] == needle[j])
			{
				k++;
				if (needle[j + 1] == '\0')
					return (haystack + i);
			}
		}
	}
	return (NULL);
}
