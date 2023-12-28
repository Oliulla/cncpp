#include <stdio.h>

// int main()
// {
//     int dice = 1;

//     while (dice <= 6)
//     {
//         if (dice < 6)
//         {
//             printf("No Yatzy!\n");
//         }
//         else 
//         {
//             printf("Yatzy!\n");
//         }

//         dice ++;
//     }

//     return 0;
// }


int main() 
{
    int myNumbers[] = {25, 50, 75, 100};
    // int i;
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d", size);
}