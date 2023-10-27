#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double x;
    double y;
} point;
int main()
{
    int i;
    point points[10];
    for (i = 0; i <= 10; i++)
    {
        points[i].x = rand() % 100;
        points[i].y = rand() % 100;
    }

    int index;
    printf("Enter the record to pull\n");
    scanf("%d",&index);
    printf("X: %.2lf\nY: %.2lf\n",points[index].x, points[index].y);
}