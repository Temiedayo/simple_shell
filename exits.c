#include "shell.h"
/**
 **_strncpy - Copies string
 *@dest: Destination string to copy to
 *@src: Source of string
 *@n: Numbers of characters to copy
 *Return: Concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
while (src[i] != '\0' && i < n - 1)
{
dest[i] = src[i];
i++;
}
if (i < n)
{
j = i;
while (j < n)
{
dest[j] = '\0';
j++;
}
}
return (s);
}
/**
 **_strncat - Concatenates two strings
 *@dest: First string
 *@src: Second string
 *@n: Number of bytes to be used
 *Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
if (j < n)
dest[i] = '\0';
return (s);
}
/**
 **_strchr - Finds the character in a string
 *@s: String to parse
 *@c: Character to look for
 *Return: (s)
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
return (s);
} while (*s++ != '\0');
return (NULL);
}
