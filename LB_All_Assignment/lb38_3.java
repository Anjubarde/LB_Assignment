import java.util.Scanner;

class Digit 
{
    public int countRange(int iNo) 
    {
        int iCnt = 0;
        if(iNo < 0) 
        {
            iNo = -iNo;
        }

        while(iNo != 0) 
        {
            int iDigit = iNo % 10;
            if(iDigit == 4 || iDigit == 5 || iDigit == 6) 
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }

}

class lb38_3 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit dObj = new Digit();

        System.out.println("Enter Number: ");
        int iNo = scanner.nextInt();
        
        System.out.println("Number of Digits in Range: " + dObj.countRange(iNo));
    }
}
