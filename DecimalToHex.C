#include<stdio.h>
#include<math.h>
int main()
{
    int decimal,i,hexa,temp;
    printf("Enter a decimal No.:");
    scanf("%d",&decimal);
    hexa=i=0;
    while(decimal>0)
    {
        //if(decimal)
        //printf("\nHexa:%dPow:%d",hexa,i);
        temp=(decimal%16);
        if(temp>9)
            {
               /* if(hexa==10)
                    printf("%c ",'A');
                else if(hexa==11)
                    printf("%c ",'B');
                else if(hexa==12)
                    printf("%c ",'C');
                else if(hexa==13)
                    printf("%c ",'D');
                else if(hexa==14)
                    printf("%c ",'E');
                else if(hexa==15)
                    printf("%c ",'F');*/
                hexa=hexa+(decimal%16)*pow(100,i);
            }
        else
            hexa=hexa+(decimal%16)*pow(100,i);//printf("%d ",hexa);
        i++;
        decimal=decimal/16;
    }
    printf("\n\nHexadecimal:%d",hexa);
    return 0;
}
