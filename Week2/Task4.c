#include <stdio.h>
int main()
{
    int i;
    char hello[6] = "Hello";
    for (i = 4; i >= 0; i--)
    {
        printf("%c\n", hello[i]);
    }
    printf("%c\n", hello[5]);
    return 0;
}