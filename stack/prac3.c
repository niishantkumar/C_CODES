//circular queue
#include <stdio.h>
#define SIZE 5 // Define the size of the queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to add an element to the queue
void enqueue(int item)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if (front == -1) // If the queue is initially empty
            front = 0;
        rear++;
        queue[rear] = item;
        printf("Inserted %d\n", item);
    }
}

// Function to remove an element from the queue
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted %d\n", queue[front]);
        front++;
        // Reset front and rear if the queue becomes empty after dequeuing
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

// Function to display the elements of the queue
void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(50);
    display();

    dequeue();
    display();

    enqueue(60);
    display();

    return 0;
}
