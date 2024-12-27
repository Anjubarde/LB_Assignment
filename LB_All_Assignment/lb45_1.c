/*
    Write a program which displays all elements which are perfect from singly linear 
    linked list.
    
    Function Prototype :
    int DisplayPerfect(PNODE Head);
    Input Linked list : |11|->|28|->|17|->|41|->|6|->|89|
    Output : 6   28
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

int Perfect(int iNum)
{
    int iSum = 0;
    for(int i = 1; i <= iNum/2; i++) 
    {
        if(iNum % i == 0) 
        {
            iSum += i;
        }
    }
    return iSum == iNum;
}

int Display(PNODE Head)
{
    PNODE temp = Head;
    int iCount = 0;
    
    while(temp != NULL) 
    {
        if(Perfect(temp->Data)) 
        {
            printf("%d ", temp->Data);
            iCount++;
        }
        temp = temp->Next;
    }
    return iCount;
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 11);
    InsertFirst(&first, 28);
    InsertFirst(&first, 17);
    InsertFirst(&first, 41);
    InsertFirst(&first, 6);
    InsertFirst(&first, 89);

    printf("Perfect numbers in the list are: ");
    int iResult = Display(first);
    if(iResult == 0) 
    {
        printf("There is Error ok!!\n");
    }

    return 0;
}