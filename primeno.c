// Take input an integer from the user & display whether prime or not.
#include <stdio.h>
void main()
{
    int num, count = 0;
    printf("Enter number to be checked : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count = count + 1;
        }
    }
    if (count > 2)
    {
        printf("%d is not a prime number.",num);
    }
    else
    {
        printf("%d is a prime number.",num);
    }
}