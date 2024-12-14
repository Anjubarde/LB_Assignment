/*
    Write java program which accept N numbers from user and accept one another number as 
    NO, check whether NO is present or not.
    Input :  N : 6
    NO : 66
    Elements : 85   66  3  66  93  88
    Output : TRUE

    Input :  N : 6
    NO : 12
    Elements : 85   11  3  15  11  111
    Output : FALSE
*/

import java.util.Scanner;

class Number 
{
    boolean Check(int Arr[], int iNo) 
    {
        int i = 0;
        for(i = 0; i < Arr.length; i++) 
        {
            if(Arr[i] == iNo) 
            {
                return true; 
            }
        }
        return false;
    }
}

public class lb39_1 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements : N: ");
        int N = scanner.nextInt();

        System.out.print("Enter the number to check for NO: ");
        int NO = scanner.nextInt();

        int[] elements = new int[N];
        System.out.print("Enter the elements: ");

        int i = 0;
        for(i = 0; i < N; i++) 
        {
            elements[i] = scanner.nextInt();
        }

        Number numberObj = new Number();
        boolean result = numberObj.Check(elements, NO);

        if(result) 
        {
            System.out.println("TRUE");
        } 
        else 
        {
            System.out.println("FALSE");
        }
    }
}
