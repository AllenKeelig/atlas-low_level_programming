#include "main.c"
#include "_putchar.c"
#include "main.h"
/* Function prototype */
void print_alphabet(void);

/* Custom putchar function */
int _putchar(char c) {
    return write(1, &c, 1);
}

/* Function definition */
void print_alphabet(void) {
    char letter = 'a';

    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}

int main() {
    /* Call the function to print the alphabet */
    print_alphabet();

    return 0;
}

