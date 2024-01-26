#include <stdio.h>

int _isupper(int c) {
    // Check if the character is uppercase
    if (c >= 'A' && c <= 'Z') {
        return 1; // Uppercase character
    } else {
        return 0; // Not an uppercase character
    }
}

int main() {
    // Example usage
    char testChar = 'A';
    
    if (_isupper(testChar)) {
        printf("%c is an uppercase character\n", testChar);
    } else {
        printf("%c is not an uppercase character\n", testChar);
    }

    return 0;
}

