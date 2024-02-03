#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * leet - Encodes a string into 1337.
 * @input: The input string to be encoded.
 *
 * Return: A dynamically allocated string containing the encoded result.
 */
char *leet(char *input)
{

    size_t len = strlen(input);
    char *result = (char *)malloc((len + 1) * sizeof(char));
    size_t i;

    for (i = 0; i < len; i++)
    {
        if (input[i] == 'a' || input[i] == 'A')
            result[i] = '4';
        else if (input[i] == 'e' || input[i] == 'E')
            result[i] = '3';
        else if (input[i] == 'o' || input[i] == 'O')
            result[i] = '0';
        else if (input[i] == 't' || input[i] == 'T')
            result[i] = '7';
        else if (input[i] == 'l' || input[i] == 'L')
            result[i] = '1';
        else
            result[i] = input[i];
    }

    result[len] = '\0';
    return result;
}
