#include <stdio.h>

int addTwo(int, int);

int main()
{
    int res = addTwo(2, 4);
    printf("Result : %d", res);
}

int addTwo(int x, int y)
{
    return x + y;
}