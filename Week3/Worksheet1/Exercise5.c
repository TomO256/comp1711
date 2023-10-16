#include <stdio.h>
int main()
{
    int option;
    printf("Enter an option between 1 and 5\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Option 1 Selected\n");
        break;
    case 2:
        printf("Option 2 Selected\n");
        break;
    case 3:
        printf("Option 3 Selected\n");
        break;
    case 4:
        printf("Option 4 Selected\n");
        break;
    case 5:
        printf("Option 5 Selected\n");
        break;
    default:
        printf("Invalid Option Selected\n");
        break;
    }
}