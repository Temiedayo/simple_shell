#include "shell.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to memory area
 * @b: Byte to fill *s with
 * @n: Num of bytes to be filled
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
/**
 * ffree - Frees string of strings
 * @pp: String of strings
 */
void ffree(char **pp)
{
char **a = pp;
if (!pp)
return;
while (*pp)
free(*pp++);
free(a);
}
/**
 * _realloc - Reallocates a block of memory
 * @ptr: Pointer to preceding malloc'ated block
 * @old_size: Byte size of the previous block
 * @new_size: Byte size of the new block
 *
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
if (!ptr)
return (malloc(new_size));
if (!new_size)
return (free(ptr), NULL);
if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (!p)
return (NULL);
old_size = old_size < new_size ? old_size : new_size;
while (old_size--)
p[old_size] = ((char *)ptr)[old_size];
free(ptr);
return (p);
}
