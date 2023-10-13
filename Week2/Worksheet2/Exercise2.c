#include <stdio.h>
int main()
{
    int a[5] = {41, 51, 23, 1, 5}, i;
    printf("The array in order is\n");
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("The array reversed is\n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}