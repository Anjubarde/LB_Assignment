/*
    Wrie a java program which accept string from user and count number of capital 
    characters.
    Input : "Marvellous Multi OS"
    Output : 4
*/
import java.util.Scanner;

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCount = 0, iCnt = 0;
        for(iCnt = 0; iCnt < str.length(); iCnt++)
        {
            int iValue = 'A';
            
            if(iValue >= 'A' && iValue <= 'Z')
            {
                iCount++;  
            }
        }
        return iCount;  
    }
}

class lb36_1
{
    public static void main(String args[])
    {
        StringDemo sobj = new StringDemo();
        
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter a string: ");
        String iInput = scanner.nextLine();
        
        int iRet = sobj.CountCapital(iInput);
        
        System.out.println("Count of Capital Characters: " + iRet);
        
    }
}
