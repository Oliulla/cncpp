#include <stdio.h>

int main()
{

    char carName[] = "Volvo";
    int length = sizeof(carName) / sizeof(carName[0]);
    printf("%lu", length);

    return 0;
}
