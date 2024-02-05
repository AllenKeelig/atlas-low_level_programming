#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the input string.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return s; /* Found the character, return its position */
        s++;
    }

    /* If the character is not found, return NULL */
    return NULL;
}

int main(void)
{
    char str[] = "Hello, world!";
    char *result = _strchr(str, 'o');

    if (result != NULL)
        printf("%s\n", result);
    else
        printf("nil\n");

    return 0;
}

