// sll creation
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node *Node;

void main()
{
    Node ptr, head;

    ptr = (Node)malloc(sizeof(struct node));

    head = ptr;

    printf("ENter data : ");
    scanf("%d", &(ptr->data));

    getchar();

    char ch;
    printf("Do you want to enter more data ? ");
    scanf("%c", &ch);

    while (ch == 'y' || ch == 'Y')
    {
        ptr->next = (Node)malloc(sizeof(struct node));
        ptr = ptr->next;
        printf("ENter data : ");
        scanf("%d", &(ptr->data));
        getchar();
        printf("Do you want to enter more data ? ");
        scanf("%c", &ch);
    }

    ptr->next = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
}