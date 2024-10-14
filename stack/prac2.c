// implementing stack using structure
#include <stdio.h>
#include <stdlib.h>
#define MAXSTK 5

struct stack
{
    int top;
    int item[MAXSTK];
};

typedef struct stack s;
int isEmpty(s *);
int isFull(s *);
void push(s *, int);
void pop(s *);
void display(s *);

// main func
void main()
{
    s s1;
    int x;
    int ch;
    s1.top = -1;

    while (1)
    {
        printf("1 Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            printf("\nEnter elements\n");
            scanf("%d", &x);
            push(&s1, x);
            break;
        }

        case 2:
        {
            pop(&s1);
            break;
        }

        case 3:
        {
            display(&s1);
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

int isEmpty(s *s1)
{
    if (s1->top == -1)
        return 1;
    else
        return 0;
}

int isFull(s *s1)
{
    if (s1->top == MAXSTK - 1)
        return 1;
    else
        return 0;
}

void push(s *s1, int x)
{
    if (isFull(s1))
    {
        printf("\nOverflow");
        return;
    }

    s1->top++;
    s1->item[s1->top] = x;
}

void pop(s *s1)
{
    int x;
    if (isEmpty(s1))
    {
        printf("\nUnderflow");
        return;
    }
    x = s1->item[s1->top];
    s1->top--;
    printf("\nThe popped element is %d", x);
    printf("\n");
}

void display(s *s1)
{
    if (isEmpty(s1))
    {
        printf("\nUnderflow\n");
        return;
    }
    printf("\nElements of stack are\n");

    for (int i = s1->top; i >= 0; i--)
    {
        printf("%d\t", s1->item[i]);
    }

    printf("\n");
}