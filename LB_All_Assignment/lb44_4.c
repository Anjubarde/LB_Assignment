/*
    Write a program which returns largest element from singly linear linked list.
    
    Function Prototype :
    int Maximun(PNODE Head);
    Input Linked list : |110|->|230|->|320|->|240|
    Output : 320
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

int Maximum(PNODE head)
{
    if (head == NULL)  
    {
        printf("List is empty.\n");
        return -1; 
    }

    int iMax = head->data;  
    head = head->next;    

    while (head != NULL)
    {
        if (head->data > iMax)
        {
            iMax = head->data; 
        }
        head = head->next; 
    }

    return iMax;  
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,240);
    InsertFirst(&first,320);
    InsertFirst(&first,230);
    InsertFirst(&first,110);

    int largest = Maximum(first);

    if (largest != -1)
    {
        printf("The largest element in the list is: %d\n", largest);
    }

    return 0;
}