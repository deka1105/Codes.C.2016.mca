#include<stdio.h>
#include<math.h>
int main()
{
    int i, number;
    printf("Enter a number:");
    scanf("%d",&number);
    i=2;
    while(number>i)
    {
        if(number%i==0)
            printf("\n%d",i);i++;

    }
    printf("END");
    return 0;
}
