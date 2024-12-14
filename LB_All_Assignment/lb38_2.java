import java.util.Scanner;

class Digit 
{
    public int countOdd(int iNo) 
    {
        int iOddDigits = 0;
        while(iNo != 0) 
        {
            int iRem = iNo % 10;
            System.out.println(iRem);
            if(iRem % 2 != 0) 
            { 
                iOddDigits++;
            }
            iNo = iNo / 10; 
        }
        return iOddDigits;
    }

}

public class lb38_2 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit dObj = new Digit();

        System.out.println("Enter Number: ");
        int iNo = scanner.nextInt();
        System.out.println("Number of Odd Digits: " + dObj.countOdd(iNo));
    }    
}
