/*
    Write a program which returns smallest element from singly linear linked list.
    
    Function Prototype :
    int Minimum(PNODE Head);
    Input Linked list : |110|->|230|->|20|->|240|->|640|
    Output : 20
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

int Minimum(PNODE head)
{
    if (head == NULL)  
    {
        printf("List is empty.\n");
        return -1; 
    }

    int iMin = head->data;  
    head = head->next;    

    while (head != NULL)
    {
        if (head->data < iMin)
        {
            iMin = head->data; 
        }
        head = head->next; 
    }

    return iMin;  
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,240);
    InsertFirst(&first,320);
    InsertFirst(&first,230);
    InsertFirst(&first,110);

    int Smallest = Maximum(first);

    if (Smallest != -1)
    {
        printf("The largest element in the list is: %d\n", Smallest);
    }

    return 0;
}