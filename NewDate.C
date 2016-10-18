#include<stdio.h>
#include<math.h>
    int prime(int);\
    void datecheck(int);
    void invalid();
    void valid();
    void fact(int);
    void rev(int);
    void binary(int);
int main(){
    int n,flag;
    int d1,d2;
    printf("Enter two dates in (ddmmyyyy):");
    scanf("%d%d",&d1,&d2);
    datecheck(d1);
    printf("\n");
    datecheck(d2);
/*
    printf("\nEnter a number:");
    scanf("%d",&n);
    binary(n);
    facto(n);
    rev0(n);
    flag=prime(n);
    {
        if(flag!=0)
            printf("\nNot Prime");
        else
            printf("\nPrime");
    }
*/
    return 0;
}
void facto(int n){
        static int fact=1;
        if(n>1){
            fact=fact*n;
            n--;
            printf("\nFact*N:%d*%d",fact,n);
            facto(n);
        }
        else
            printf("\nFactorial:%d",fact);
}
void rev0(int n){
        static int rev;
        if(n>0){
            rev=rev*10+(n%10);
            n/=10;
            rev0(n);
        }
        else
            printf("\nReverse:%d",rev);
}
int prime(int n){
    static int i=2,count=0;
    int flag=0;
    printf("\nIteration:%d",count++);
    if(i<n){
        if(n%i==0){
            flag++;
            return flag;
        }
        else{
            i++;
            prime(n);
        }
    }
    else
        return flag;
}
void binary(int n){
    static int bin=0,i=0;
    if(n>0){
        bin=bin+(n%2)*pow(10,i);
        n/=2;
        i++;
        binary(n);
    }
    else
        printf("\Binary:%d",bin);
}
void invalid(){
     printf("\n Invalid Date");
}
void valid(){
     printf("\n valid Date");
}
void datecheck(int date){
    int month, days, year,copy;
    copy=date/10000;
    days=date/1000000;
    month=copy-(days*100);
    year=date%10000;

    printf("Copy:%d",copy);
    printf("\nDay:%d",days);
    printf("\nMonth:%d",month);
    printf("\nYear:%d",year);
    if(month>12){
    if((year%4==0||year%100!=0)&&year%400==0){
        printf("\n%d is not a Leap Year", year);
        if (month==2){
            if(days>=29){
                invalid();
            }
            else
                valid();
        }
    }
    else{
         printf("\n%d is leap year", year);
        if (month==2){
                if(days>=30){
                invalid();
        }
        else
            valid();
    }
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        if(days>=31)
            invalid();
        else
            valid();
    }
    else
        if(days>=30)
            invalid();
        else
            valid();
    }
}

}
