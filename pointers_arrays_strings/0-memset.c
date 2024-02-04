#include <stddef.h>

unsigned int i;
char *_memset(char *s, char b, unsigned int n) {
    for (i = 0; i < n; i++) {
        s[i] = b;
    }

    return s;
}
