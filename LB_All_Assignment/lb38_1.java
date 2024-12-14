import java.util.Scanner;

class Digit 
{
    public int countEven(int iNo) 
    {
        int iEvenDigits = 0;

        while(iNo != 0) 
        {
            int iRem = iNo % 10;
            if(iRem % 2 == 0) 
            { 
                iEvenDigits++;
            }
            iNo = iNo / 10; 
        }
        return iEvenDigits;
    }

    
}
public class lb38_1 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit dObj = new Digit();

        System.out.println("Enter Number: ");
        int iNo = scanner.nextInt();

        System.out.println("Number of Even Digits: " + dObj.countEven(iNo));
    }    
}
