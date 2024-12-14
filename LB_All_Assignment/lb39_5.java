/*
    Write java program which accept N numbers from user and return product of all odd 
    elements.
    Input :  N : 6
    Elements : 15   66  3  70  10  88
    Output : 45

    Input :  N : 6
    NO : 66
    Elements : 44   66  72  70  10  88
    Output : 0
*/
import java.util.Scanner;

class Number 
{
    public int Product(int Arr[]) 
    {
        int iCnt = 0, iProduct = 1; 
        boolean Fodd = false; 

        for(iCnt = 0; iCnt < Arr.length; iCnt++) 
        {
            if(Arr[iCnt] % 2 != 0) 
            { 
                iProduct *= Arr[iCnt]; 
                Fodd = true; 
            }
        }

        if(!Fodd) 
        {
            return 0;
        }

        return iProduct;
    }
}

public class lb39_5 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements : ");
        int iNo = scanner.nextInt();

        int[] elements = new int[iNo];

        System.out.print("Enter the elements: ");

        int i = 0;
        for(i = 0; i < iNo; i++) 
        {
            elements[i] = scanner.nextInt();
        }

        Number numberObj = new Number();

        int result = numberObj.Product(elements);
        System.out.println("Product of odd elements: " + result);
    }
}
