#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("Max integer size: %d\n",INT_MAX);
    printf("Max float size: %f\n",FLT_MAX);
    printf("Max double size: %f\n",DBL_MAX);
    printf("Max char size: %d\n",CHAR_MAX);
    return 0;
}