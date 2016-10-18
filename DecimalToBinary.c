/*#include<stdio.h>
#include<math.h>
int main()
{
    int dec, b, rem; long new;
    printf("Enter a Decimal Number: \t");
    scanf("%d", &dec);
    //printf("1");
    for(int i=1; dec!=0; i--)
    {
        //if(dec==1||dec==2||)
        b=dec%2;
        //printf("%d",b);
        dec=dec/2;
        new += rem*pow(2,i);
        //printf("Dec=%d",dec);
        printf("%d", new);

    }
    printf("\n");printf("\n");printf("\n");
    return 0;
}*//*
#include <stdio.h>
#include <math.h>
int ConvertBinaryToDecimal(long long n);

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, ConvertBinaryToDecimal(n));
    return 0;
}

int ConvertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
*/
#include <stdio.h>
#include <math.h>
long long convertDecimalToBinary(int n);

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %lld in binary", n, convertDecimalToBinary(n));
    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step;

    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
