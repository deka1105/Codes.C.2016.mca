#include<stdio.h>
int main(){
    int a[]={1,5,3,2,4,0},i,*p,temp;
    p=a;
    printf("\nA={");
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    printf("}");
    for(i=0;i<6-1;i++){
        if(a[i]>a[i+1]){
            temp=*p;
            *p=*p+i;
            *(p+i)=temp;
        }
    }
    printf("\nA={");
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    printf("}");
    printf("\n");
    return 0;
}
