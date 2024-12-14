/*
    Write java program which accept N numbers from user and return difference between 
    summation of even elements and summatiob of odd elements.
    Input :   N : 6
    Elements : 85   66  3   80  93  88
    Output : 53 (234 - 181)

*/

import java.util.Scanner;

class ArrayDemo 
{
    public int Difference(int Arr[]) 
    {
        int evenSum = 0;
        int oddSum = 0;
        for(int i = 0; i < Arr.length; i++) 
        {
            if(Arr[i] % 2 == 0) 
            {
                evenSum += Arr[i];
            } 
            else 
            {
                oddSum += Arr[i];
            }
        }
        return evenSum - oddSum;
    }
}

class lb37_1
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        ArrayDemo aObj = new ArrayDemo();

        System.out.println("Enter size of array: ");
        int iN = scanner.nextInt();

        int Arr[] = new int[iN];

        System.out.println("Enter elements: ");
        int i = 0;
        for(i = 0; i < Arr.length; i++) 
        {
            Arr[i] = scanner.nextInt();
        }

        System.out.println("Even Odd Difference: " + aObj.Difference(Arr));

    }
}