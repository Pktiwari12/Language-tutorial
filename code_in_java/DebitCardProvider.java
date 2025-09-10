import java.util.Scanner;
class DebitCard 
{
    long cardNum ;              // 16 digit card number
    public  DebitCard(long n)
    {
        cardNum = n;
    }
    long copyCardNum=cardNum;

     /*int digitsat4 = (int)cardNum%10000;           // taking last 4 digits
     cardNum = cardNum/10000;
     int digitsat3 = (int)cardNum%10000;           // Taking 3rd group of digits       
     cardNum = cardNum/10000;
     int digitsat2 = (int)cardNum%10000;            // Taking second group of digits
     cardNum = cardNum/10000;            
     int digitsat1 = (int)cardNum;
     System.out.println(digitsat3); */
     int digitgroup[] = new int[4];
     for(int i=0;i<4;i++)
     {
        digitgroup[i] = (int)cardNum%10000;
        cardNum = cardNum/10000;


     }
     
     int sumdigit[];
     sumdigit[]=new int[4];
     for(int i=0;i<4;i++)
     {
        sumdigit[i] = 0;
        for(int j=0;j<4;j++)
        {
            sumdigit[i] = sumdigit[i]+digitgroup[i]%10;
            digitgroup[i] = digitgroup[i]/10;

        }
        int sum1 = sumdigit[1] +  sumdigit[2];
        int sum2 = sumdigit[3] +  sumdigit[4];
     }


    
    }
    public class DebitCardProvider
    {
        public static void main(String args[])
        {
            Scanner myobj = new Scanner(System.in);
            long cardno = myobj.nextLong();
            DebitCard cust1 = new DebitCard(cardno);
            for(int i=0;i<4;i++)
            {
            System.out.println(cust1.digitgroup[i]);
            }
        }
    }
