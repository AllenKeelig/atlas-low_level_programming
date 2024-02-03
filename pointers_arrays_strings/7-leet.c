#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *leet(const char *input) 
{
	size_t len = strlen(input);
	char *result = (char *)malloc((len + 1) * sizeof(char));
	size_t i
	char *vowels_and_letters = "aeotlAEOTL";
	char *leet_replacements = "4307143071";

	for (i = 0; i < len; i++) {
		char *pos = strchr(vowels_and_letters, input[i]);

		result[i] = (pos != NULL) ? leet_replacements[pos - vowels_and_letters] : input[i];
	}

	result[len] = '\0';
	return result;
}
