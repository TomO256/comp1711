#include <stdio.h>

int isPrime(int number)
{
    int i;
    if (number == 1)
    {
        return 0;
    }
    for (i = 2; i < number; i++)
    {
        if ((number % i) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int number, result;
    printf("Enter a number to check whether it is prime\n");
    scanf("%d", &number);
    result = isPrime(number);
    if (result == 0)
    {
        printf("The function exited with code 0\nThe number is not prime");
    }
    else
    {
        printf("The function exited with code 1\nThe number is prime");
    }
    return 0;
}
