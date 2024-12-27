/*
    Write a program which returns additon of all even element from singly linear 
    linked list.
    
    Function Prototype :
    int AdditionEven(PNODE Head);
    Input Linked list : |11|->|20|->|32|->|41|
    Output : 52
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int AdditionEven(PNODE Head)
{
    PNODE temp = Head;
    int iSum = 0;

    while(temp != NULL) 
    {
        if(temp->Data % 2 == 0) 
        {
            iSum += temp->Data;
        }
        temp = temp->Next; 
    }

    return iSum;
};

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 41);
    InsertFirst(&first, 32);
    InsertFirst(&first, 20);
    InsertFirst(&first, 11);

    int iResult = AdditionEven(first);
    printf("Addition of all Even elements: %d\n", iResult);

    return 0;
}