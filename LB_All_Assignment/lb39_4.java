/*
    Write java program which accept N numbers from user and accept Range, Display all 
    elements from that range.
    Input :  N : 6
    Start : 60
    End : 90
    Elements : 85   66  3  76  93  88
    Output : 66    76   88

    Input :  N : 6
    Start : 30
    End : 50
    Elements : 85   66  3  76  93  88
    Output : 
*/

import java.util.Scanner;

class Number 
{
    public void Display(int Arr[], int iStart, int iEnd) 
    {
        boolean Found = false;  
        
        for(int i = 0; i < Arr.length; i++) 
        {
            if(Arr[i] >= iStart && Arr[i] <= iEnd) 
            {
                System.out.print(Arr[i] + " ");  
                Found = true;
            }
        }
        
        if(!Found) 
        {
            System.out.println();  
        }
    }
}

public class lb39_4 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the no of elements : ");
        int N = scanner.nextInt();

        System.out.print("Enter the star value : ");
        int Start = scanner.nextInt();
        System.out.print("Enter the end value : ");
        int End = scanner.nextInt();

        int[] elements = new int[N];
        System.out.print("Enter the elements : ");

        int i = 0;
        for(i = 0; i < N; i++) 
        {
            elements[i] = scanner.nextInt();
        }

        Number numberObj = new Number();
        System.out.print("Elements in the range [" + Start + ", " + End + "]: ");
        numberObj.Display(elements, Start, End);
    }
}
