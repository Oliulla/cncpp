#include <stdio.h>

int main()
{
    // int yourNum;
    // char yourChar;

    // // Ask the user to type a number AND a character
    // printf("Type a number AND a character and press enter: \n");

    // scanf("%d %c", &yourNum, &yourChar);

    // // Print the number
    // printf("Your number is: %d\n", yourNum);

    // // Print the character
    // printf("Your character is: %c\n", yourChar);

    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    return 0;
}