// stack push pop
#include <stdio.h>
#include <conio.h>
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
    clrscr();
    while (1)
    {
        printf("\n1. Push\n");
        printf("\n2. Pop\n");
        printf("\n3. Display\n");
        printf("\n3. Quit\n");
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
    clrscr();
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
    clrscr();
    if (top == -1)
    {
        printf("\nOverflow\n");
    }

    r = arr[top];
    top--;
    printf("\nThe popped element = %d\n", r);
}

// func for display
void display()
{
    clrscr();
    if (top == -1)
    {
        printf("\nOverflow\n");
    }

    for (int i = top; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}