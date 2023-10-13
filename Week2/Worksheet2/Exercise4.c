#include <stdio.h>
int main()
{
    int array[5] = {234, 62, 72, 14, 3}, i, workingValue, newArray[5];
    for (i = 0; i <= 4; i++)
    {
        if (i == 4)
        {
            newArray[0] = array[i];
        }
        else
        {
            newArray[i + 1] = array[i];
        }
    }
    printf("The original list is:\n");
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("The new list is\n");
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", newArray[i]);
    }

    return 0;
}