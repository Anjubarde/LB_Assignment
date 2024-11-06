/*
    1) Write a program which accept one number from user
    and print that number of even numbers on screen    
*/

#include <stdio.h>

void printEven(int iNo) {
    if(iNo <= 0) {
        return;    
    }

    for(int i=1; i<=iNo; i++) {
        printf("%d ", 2*i);
    }
}

int main() {
    int iValue = 0;
    printf("Enter number\n");

    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}