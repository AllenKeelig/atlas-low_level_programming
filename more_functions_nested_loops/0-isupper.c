#include "main.h"
#include <stdio.h>

int _isdigit(int c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int main() {
    // Test cases
    printf("%d\n", _isdigit('5'));  // Should print 1
    printf("%d\n", _isdigit('a'));  // Should print 0

    return 0;
}

