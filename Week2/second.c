// Imports the main IO library
#include <stdio.h>
int main()
{
    // Creating a variable which can have a maximum of 15 characters
    char name[15];

    // Ouptuts a prompt to the user
    printf("Hello, please enter your name\n");

    // Input statement waiting for the user to enter their name
    scanf("%s", name);

    // Ouputs the user's name
    printf("Your name is %s\n", name);

    return 0;
}