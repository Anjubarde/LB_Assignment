/*
    Write a program which accept string from user and count number of small 
    characters.
*/
import java.util.Scanner;

class StringDemo
{
    public int CountSmall(String str)
    {
        int iCnt = 0, iCount = 0;
        for(iCnt = 0; iCnt < str.length(); iCnt++)
        {
            int iValue = 'a';
            if(iValue >= 'a' && iValue <= 'z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class lb36_2 
{
    public static void main(String aegs[])
    {
        StringDemo sobj = new StringDemo();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the string :");
        String iInput = scanner.nextLine();

        int iRet = sobj.CountSmall(iInput);
        
        System.out.println("Count of Small Characters: " + iRet);

    }    
}
