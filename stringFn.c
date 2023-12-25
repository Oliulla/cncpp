#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet));
    printf("%d\n", sizeof(alphabet));

    char x[] = "X";
    char y[] = "Y";
    strcat(x, y);
    printf("%s\n", x);

    return 0;
}
