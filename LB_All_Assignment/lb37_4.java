/*
    Write java program which accept N numbers from user and display all such elements 
    which are divisible by 3 and 5.
    Input :   N : 6
    Elements : 85   66  3   15  93  88
    Output : 15    
*/

import java.util.Scanner;
class ArrayDemo 
{
    public void Display(int Arr[]) 
    {
        for(int i = 0; i < Arr.length; i++) 
        {
            if(Arr[i] % 3 == 0 && Arr[i] % 5 == 0) 
            {
                System.out.print(Arr[i] + " ");
            }
        }
    }
}

class lb37_4 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        ArrayDemo aObj = new ArrayDemo();

        System.out.println("Enter size of array: ");
        int iN = scanner.nextInt();

        int Arr[] = new int[iN];

        System.out.println("Enter elements: ");
        for(int i = 0; i < Arr.length; i++) 
        {
            Arr[i] = scanner.nextInt();
        }

        aObj.Display(Arr);

    }
    
}
