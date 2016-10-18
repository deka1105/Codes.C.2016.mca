#include<math.h>
#include<stdio.h>
 int main()
 {
     int n,d,ans,i;
     //clrscr();
     ans=0;
     i=0;
     printf("\nEnter a Number:");
     scanf("%d",&n);
     while(n>0)
     {
         d=n%10;
         n=n/10;
         d=(d+1)%10;
         ans=ans+(d*pow(10,i++));
     }
     printf("\n Ans:%d\n",ans);
     return 0;
 }
