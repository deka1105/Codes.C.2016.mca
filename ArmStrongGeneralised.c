//#include<conio.h>
#include<stdio.h>
int main()
{
	int num, copy, i, mul, tens, var;
    printf("Enter a number:\t");
	scanf("%d", &num);
	copy=num; mul=1; tens=10;
//	printf("\nNumber %d", num);
	for(i=1;i<11;i++)
    {
        int temp= num%tens;
        mul= temp*temp*temp;
        var=var+mul;
//        printf("\ntemp= %d",temp);
//        printf("\nmul= %d",mul);
//        printf("\nNumBefore= %d",num);
//        printf("\n");
        num=num/10;
//        printf("\nNumAfter= %d",num);
    }
//    printf("\nVar= %d",var);
//    printf("\nCopy= %d",copy);
    if(copy==var)
        printf("%d is Armstrong", copy);
    else
        printf("%d is Not Armstrong", copy);
    printf("\n");printf("\n");
	return 0;
}
