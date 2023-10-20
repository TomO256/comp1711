#include <stdio.h>
#include <math.h>
float sphereVolume(float radius)
{
    float volume,pi;
    pi=acos(-1);
    volume = (4/3) * pi * (radius *radius *radius);
    return volume;
}

int main()
{
    float radius, volume;
    printf("Enter the radius of the sphere to find the volume\n");
    scanf("%f",&radius);
    volume=sphereVolume(radius);
    printf("The volume of the sphere is %.3f",volume);
    return 0;
}