#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");

    return 0;
}

