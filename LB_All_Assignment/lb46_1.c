/*
    Write a program which reverse each element of singly linked list.

    Function Prototype : 
    void Reverse(PNODE Head);
    Input Linked list : |11|->|28|->|17|->|41|->|6|->|89|
    Output : |11|->|82|->|71|->|14|->|6|->|98|
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

int ReverseDigits(int iNum)
{
    int iReversed = 0;
    
    while(iNum != 0)
    {
        iReversed = iReversed * 10 + (iNum % 10);
        iNum /= 10;
    }

    return iReversed;
}

void Reverse(PNODE head)
{
    PNODE temp = head;

    while (temp != NULL)
    {
        temp->data = ReverseDigits(temp->data);
        
        temp = temp->next;
    }
}

void Display(PNODE head)
{
    PNODE temp = head;
    
    while (temp != NULL)
    {
        printf("|%d| -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main()
{
    PNODE first = NULL;

    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

    Display(first);

    Reverse(first);

    printf("Linked List after reversing digits:\n");
    Display(first);
    
    return 0;
}