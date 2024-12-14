import java.util.Scanner;

class Digit 
{
    public int CountDiff(int iNo) 
    {
        int oddSum = 0;
        int evenSum = 0;

        while(iNo != 0) 
        {
            int iDigit = iNo % 10;
            if(iDigit % 2 == 0) 
            {
                evenSum += iDigit;
            } 
            else 
            {
                oddSum += iDigit;
            }
            iNo = iNo / 10;
        }
        return evenSum - oddSum;
    }

    
}

class lb38_5 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit dObj = new Digit();
        System.out.println("Enter Number: ");
        int iNo = scanner.nextInt();
        System.out.println("Even Odd Difference: " + dObj.CountDiff(iNo));
    } 
}
