#include <stdio.h>

int main() {
    int a;
    printf("Please enter a selection (0-3)\n");
    scanf("%d",&a);
    while (a<0 || a>3){
        printf("Invalid selection, please choose option between 1 and 3\n");
        scanf("%d",&a);
        printf("%d",a);
    }
    switch (a)
    {
        case 0:     printf ("Option 0 has been selected\n");
        break;

        case 1:     printf ("Option 1 has been selected\n");
        break;

        case 2: printf("Option 3 has been selected\n");
        break;
        case 3: printf("Option 3 has been selected\n");
        break;


        default:    printf ("A different option has been selected\n");
    }
}