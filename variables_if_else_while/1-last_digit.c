#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to the variable n
 * and prints the last digit of n along with additional information.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n, lastDigit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("Last digit of %d is \n", n);

        /* Extracting the last digit using modulo 10 */
        lastDigit = n % 10;

        printf("%d and is ", lastDigit);

        if (lastDigit > 5)
        {
                printf("greater than 5\n");
        }
        else if (lastDigit == 0)
        {
                printf("0\n");
        }
        else
        {
                printf("less than 6 and not 0\n");
        }

        return (0);
}

