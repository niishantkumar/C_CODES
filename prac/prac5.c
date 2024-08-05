// multiplication of matrices

#include <stdio.h>

void main()
{
    int r1, c1;
    printf("Enter r1 : ");
    scanf("%d", &r1);
    printf("Enter c1 : ");
    scanf("%d", &c1);
    int mtrx1[r1][c1];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element at index %d,%d : ", i + 1, j + 1);
            scanf("%d", &mtrx1[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", mtrx1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int r2, c2;
    printf("Enter r2 : ");
    scanf("%d", &r2);
    printf("Enter c2 : ");
    scanf("%d", &c2);
    int mtrx2[r2][c2];

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter element at index %d,%d : ", i + 1, j + 1);
            scanf("%d", &mtrx2[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", mtrx2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    if (c1 != r2)
    {
        printf("Multiplication is not possible. As colmns of 1st mtrx is not equal to rows of 2nd.");
    }
    else
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;
                for (int l = 0; l < c1; l++)
                {
                    sum = sum + mtrx1[i][l] * mtrx2[l][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }
}