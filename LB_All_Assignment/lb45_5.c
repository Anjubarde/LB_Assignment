/*
    Write a program which display addition of digits of element from singly linear linked 
    list.
    
    Function Prototype :
    int SumDigit(PNODE Head);
    Input Linked list : |110|->|230|->|20|->|240|->|640|
    Output : 2    5    2    6    10
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

int Sum(int iNum)
{
    int iSum = 0;
    
    while (iNum != 0)
    {
        iSum += iNum % 10;
        iNum /= 10;         
    }

    return iSum;
}

int Display(PNODE Head)
{
    PNODE temp = Head;

    while (temp != NULL)
    {
        int iSum = Sum(temp->Data);
        printf("%d ", iSum);               
        temp = temp->Next;            
    }

    printf("\n");
    return 0;
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 640);
    InsertFirst(&first, 240);
    InsertFirst(&first, 20);
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);

    Display(first);

    return 0;
}
