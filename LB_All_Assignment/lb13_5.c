/*
    Accept N numbers from user and display all such elements which are 
    multiples of 11.
*/

void Display(int Arr[], int iLength)
{
    int found = 0;  // Flag to check if any number is a multiple of 11

    printf("Elements that are multiples of 11: ");
    
    // Loop through the array and check each element
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] % 11 == 0)  // Check if the element is a multiple of 11
        {
            printf("%d ", Arr[i]);
            found = 1;  // Set flag if we find a multiple of 11
        }
    }

    // If no elements meet the condition
    if (!found)
    {
        printf("No such elements found.");
    }

    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Diplay(p, iSize);
    free(p);

    return 0;
}