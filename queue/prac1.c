// implementing queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int arr[MAX];
int front = -1, rear = -1;
void insert();
void del();
void display();

// main func
void main()
{
    int ch;
    while (1)
    {
        printf("1 Insert\n");
        printf("2 Delete\n");
        printf("3 Display\n");
        printf("4 Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            insert();
            break;
        }

        case 2:
        {
            del();
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

// func to insert
void insert()
{
    int item;
    if (rear == MAX - 1)
    {
        printf("Overflow\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
    }
    printf("Enter any number\n");
    scanf("%d", &item);
    rear++;
    arr[rear] = item;
}

// func to delete
void del()
{
    if (front == -1 || front > rear)
    {
        printf("Underflow");
        return;
    }

    printf("The elements deleted form queue is : %d\n", arr[front]);
    front++;
}

void display()
{
    int i;
    if (front == -1 || front > rear)
    {
        printf("Underflow");
        return;
    }

    printf("Display Queue\n");
    for (i = front; i <= rear; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
}