// stack push pop
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int top = -1;
int arr[MAX];
void push(int);
void pop();
void display();

// main func
void main()
{
    int ch, num;
    while (1)
    {
        printf("\n1. Push\n");
        printf("\n2. Pop\n");
        printf("\n3. Display\n");
        printf("\n4. Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            printf("\nEnter elements\n");
            scanf("%d", &num);
            push(num);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
        }

        default:
            printf("Wrong choice, pls enter correct choice\n");
        }
    }
}

// func for push
void push(int x)
{
    if (top == MAX - 1)
    {
        printf("\nOverflow\n");
        return;
    }

    top++;
    arr[top] = x;
}

// func for pop
void pop()
{
    int r;
    if (top == -1)
    {
        printf("\nUnderflow\n");
    }

    r = arr[top];
    top--;
    printf("\nThe popped element = %d\n", r);
}

// func for display
void display()
{
    if (top == -1)
    {
        printf("\nUnderflow\n");
    }

    for (int i = top; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}