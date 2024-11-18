// dll creation
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node *Node;

void main()
{
    Node ptr, head, trv;

    ptr = (Node)malloc(sizeof(struct node));

    head = ptr;

    printf("ENter data : ");
    scanf("%d", &(ptr->data));
    ptr->next = NULL;

    getchar();

    char ch;
    printf("Do you want to enter more data ? ");
    scanf("%c", &ch);

    while (ch == 'y' || ch == 'Y')
    {
        trv = ptr;
        ptr->next = (Node)malloc(sizeof(struct node));
        ptr = ptr->next;
        printf("ENter data : ");
        scanf("%d", &(ptr->data));
        ptr->prev = trv;
        getchar();
        printf("Do you want to enter more data ? ");
        scanf("%c", &ch);
    }

    ptr->prev = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
}