/*
    Write a program which search first occurrence of particular element from singly 
    linear linked list.
    Function should return position at which element is found.

    Function Prototype :
    int SerachFirstOcc(PNODE Head, int no);
    Input Linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
    Input element : 30
    Output : 3
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

int SearchFirstOcc(PNODE head, int no)
{
    int iPos = 1;
    while(head != NULL)
    {
        if(head->data == no)
        {
            return iPos; 
        }
        head = head->next; 
        iPos++;
    }
    return -1;
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    int iEle = 30;
    int iPos = SearchFirstOcc(first, iEle);

    if (iPos != -1)
    {
        printf("Element %d found at position: %d\n", iEle, iPos);
    }
    else
    {
        printf("Element %d not found in the list\n", iEle);
    }
    
    return 0;
}