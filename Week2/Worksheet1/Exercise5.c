#include <stdio.h>
int main()
{
    int variable1;
    int variable2;
    printf("Enter the first variable value (integer)");
    scanf("%d", &variable1);
    printf("Enter the second variable value (integer)");
    scanf("%d", &variable2);
    printf("The variables in orginal order are %d %d", variable1, variable2);
    int variable3;
    variable3 = variable2;
    variable2 = variable1;
    variable1 = variable3;
    printf("\nThe variables after being switched are %d %d\n", variable1, variable2);
    return 0;
}