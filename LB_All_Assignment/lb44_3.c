/*
    Write a program which returns addition of all element from singly linear linked list.
    
    Function Prototype :
    int Addition(PNODE Head);
    Input Linked list : |10|->|20|->|30|->|40|
    Output : 100
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

int Addition(PNODE head)
{
    int iSum = 0;
    while(head != NULL)
    {
        iSum += head->data;
        head = head->next;
    }
    return iSum;
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    int iTotal = Addition(first);

    printf("Addition of all element is : %d\n", iTotal);

    return 0;
}