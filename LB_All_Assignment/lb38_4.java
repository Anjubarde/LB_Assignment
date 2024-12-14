import java.util.Scanner;

class Digit 
{
    public int Multiply(int iNo) 
    {
        int iMul = 1;
        while(iNo != 0) 
        {
            int iDigit = iNo % 10;
            if(iDigit != 0) 
            {
                iMul = iMul * iDigit;
            }
            iNo = iNo / 10;
        }
        return iMul;
    }    
}

public class lb38_4 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit dObj = new Digit();

        System.out.println("Enter Number: ");
        int iNo = scanner.nextInt();

        
        System.out.println("Multiplication is: " + dObj.Multiply(iNo));
    }    
}
