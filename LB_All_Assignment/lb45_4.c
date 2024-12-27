/*
    Write a program which returns second maximum element from singly linear linked list.
    
    Function Prototype :
    int SecMaximum(PNODE Head);
    Input Linked list : |110|->|230|->|320|->|240|
    Output : 240
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

int SecMaximum(PNODE Head)
{
    if(Head == NULL || Head->Next == NULL)
    {
        return -1;
    }

    int iFmax = Head->Data;
    int iSmax = -1; 

    PNODE temp = Head->Next;
    while(temp != NULL)
    {
        if(temp->Data > iFmax)
        {
            iSmax = iFmax;
            iFmax = temp->Data;
        }

        else if(temp->Data > iSmax && temp->Data != iFmax)
        {
            iSmax = temp->Data;
        }
        temp = temp->Next;
    }
    return iSmax;
};

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 240);
    InsertFirst(&first, 320);
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);

    int iResult = SecMaximum(first);
    if (iResult == -1)
    {
        printf("There is no second maximum element.\n");
    }
    else
    {
        printf("The second maximum element is: %d\n", iResult);
    }

    return 0;
}