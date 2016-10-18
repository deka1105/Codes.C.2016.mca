#include<stdio.h>
#include<math.h>

int main()
{
   /* int octal,decimal,i,digit,n,bit;
    long Rbinary,binary;
    printf("\nEnter an octal number:");
    scanf("%d",&octal);
    n=octal;
    decimal=0;
    for(i=0;0<octal;i++)
    {
        digit=octal%10;
        octal/=10;
        decimal=decimal+(digit*pow(8,i));
        printf("\nDigit(=%d  Octal=%d  Decimal=%d",digit,octal,decimal);

    }
    printf("\nDecimal:%d",decimal);
    printf("\n");
    binary=Rbinary=0;
    while(decimal>0)
    {
        bit=decimal%2;
        decimal=decimal/2;
        Rbinary=Rbinary*10+bit;
        printf("\nBit=%d  Decimal=%d  Binary=%ld",bit,decimal,Rbinary);

    }
    printf("\nReverse Binary:%d",Rbinary);
    printf("\n");

    while(Rbinary>0)
    {
        bit=Rbinary%10;
        Rbinary/=10;
        binary=binary*10+bit;
    }
    printf("\nBinary:%ld",binary);
    printf("\n");
    return 0;
    //printf("%d\n%d\n%d\n%d",345,0345,0x345,0X345);*/
    /*int i,j, count;
    for(i=0;i<=5;i++)
    {
        count=5;
        for(j=0;j<i;j++)
        {
            printf("%d ",count);
            count--;
        }
        printf("\n");
    }*/

    double root1,root2,a,b,c,d,sqrtD,Num1,Num2,dem,i,sq;
    printf("\nEnter a,b,c number:");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("\nA:%lf",a);
    printf("\nB:%lf",b);
    printf("\nC:%lf",c);
    printf("\n");
    d=((b*b)-(4*a*c));
    if(d<0)
        d=d*-1;
    //printf("\nD:%lf",d);
    //sqrtD=sqrt(d);
    sq=1;
    for(i=0.00000;sq<=d;i+=0.00001)
    {
        sq=i*i;
        if(i<0.00010)
            printf("\n%lf",i);
        if(sq==d)
            sqrtD=i;
    }
    b=b*(-1);
    dem=2*a;
    //printf("\nB:%lf",b);
    printf("\nSqrt:%lf",sqrtD);
    Num1=b+sqrtD;
    Num2=b-sqrtD;
    //printf("\nNum1:%lf",Num1);
    //printf("\nNum2:%lf",Num2);
    //rintf("\nDem:%lf",dem);
    root1=Num1/dem;
    root2=Num2/dem;
    printf("\nRoot 1:%lf",root1);
    printf("\nRoot 2:%lf",root2);
    printf("\n");
}
