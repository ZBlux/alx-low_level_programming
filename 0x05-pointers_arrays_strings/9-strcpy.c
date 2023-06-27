#include "main.h"

/**
 *_strcpy- ikhan
 *
 *@src: string
 *@dest: string
 * Return: another char
 */
char *_strcpy(char *dest, char *src)
{
        int i;
        for (i = 0; src[i] != '\0'; i++) {
                dest[i] = src[i];
        }
        int j;
        for (j = i; dest[j] != '\0'; j++) {
                dest[j] = '\0';
        }
        return (dest);
}
