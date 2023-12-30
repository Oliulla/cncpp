#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);


    if (w > 2 && w % 2 == 0)
    {
        printf("%s", " YES");
    }
    else
    {
        printf("%s", " NO");
    }

    return 0;
}
