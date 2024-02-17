#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of the second string
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string (newly allocated)
 *         Returns NULL if allocation fails or on invalid inputs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int len1;
	unsigned int len2;
	unsigned int result_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result_len = len1 + n + 1;

	result = malloc(result_len);

	if (result == NULL)
	{
		exit(98); /* Terminate with status 98 on malloc failure */
	}

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}

