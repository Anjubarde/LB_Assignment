/*
    Write a program which display all palindrome elements of singly linked list.

    Function Prototype : 
    void DisplayPallindrome(PNODE Head);
    Input Linked list : |11|->|28|->|17|->|414|->|6|->|89|
    Output : 11    6    414
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

int IsPalindrome(int iNum)
{
    int iOriginal = iNum, iReversed = 0, iRemainder;

    while (iNum != 0)
    {
        iRemainder = iNum % 10;
        iReversed = iReversed * 10 + iRemainder;
        iNum /= 10;
    }

    return (iOriginal == iReversed);
}

void DisplayPalindrome(PNODE head)
{
    PNODE temp = head;
    
    while (temp != NULL)
    {
        if (IsPalindrome(temp->data))
        {
            printf("%d ", temp->data); 
        }
        temp = temp->next;
    }
    printf("\n");
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

    printf("Final linked list:\n");
    DisplayPalindrome(first);


    return 0;
}