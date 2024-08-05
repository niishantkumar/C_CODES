// Find the GCD of two numbers.

#include <stdio.h>

// func to cal gcd
int gcd(int num1, int num2);

int main()
{
    int num1, num2;
    printf("Enter 1st number : ");
    scanf("%d", &num1);
    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    int gcd1 = gcd(num1, num2);

    if (gcd1 == 0)
    {
        printf("No common factor");
    }
    else
    {
        printf("Gcd of %d & %d is : %d", num1, num2, gcd1);
    }
}

int gcd(int num1, int num2)
{
    int min = num1 < num2 ? num1 : num2;

    int gcd1 = 0;

    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd1 = i;
        }
    }

    return gcd1;
}