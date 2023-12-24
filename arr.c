#include <stdio.h>

int main()
{
    // int myNumbers[] = {25, 50, 75, 100};
    // int i;
    // int size = sizeof(myNumbers) / sizeof(myNumbers[0]);
    // printf("%d\n", size);

    // for (i = 0; i < size; i++)
    // {
    //     printf("%d\n", myNumbers[i]);
    // }

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};


    float sum, avg = 0;
    int i;

    int len = sizeof(ages) / sizeof(ages[0]);

    for ( i = 0; i < len; i++)
    {
       sum += ages[i];
    }

    avg = sum / len;

    printf("Average age is : %.2f", avg);
    
}