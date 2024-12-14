/*
    Write java program which accept N numbers from user and accept one another number as 
    No, return index of first occurence of that No.
    Input :  N : 6
    NO : 66
    Elements : 85   66  3  66  93  88
    Output : 1

    Input :  N : 6
    NO : 12
    Elements : 85   11  3  15  11  111
    Output : -1
*/
import java.util.Scanner;

class Number 
{
    public int FirstOcc(int Arr[], int iNo) 
    {
        int i = 0;
        for(i = 0; i < Arr.length; i++) 
        {
            if(Arr[i] == iNo)
            {
                return i; 
            }
        }
        return -1; 
    }
}

public class lb39_2 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements : N: ");
        int N = scanner.nextInt();

        System.out.print("Enter the number to search for NO: ");
        int NO = scanner.nextInt();

        int[] elements = new int[N];
        System.out.print("Enter the elements: ");

        int i = 0;
        for(i = 0; i < N; i++)
        {
            elements[i] = scanner.nextInt();
        }

        Number numberObj = new Number();
        int index = numberObj.FirstOcc(elements, NO);

        System.out.println("First occurrence of " + NO + " is at index: " + index);
    }
}

