#include<stdio.h>
int main(){
    int i;
    int a[]={0,1,2,3,4,5};
    int *p[]={a,a+1,a+2,a+3,a+4,a+5,a+6};
    int **ptr=p;
    //ptr=p
    printf("\n--------------------------------------------------------");
    printf("\nOpetration ptr++");
    ptr++;
    printf("\nptr-p:%d\n*ptr-a:%d\n**ptr:%d",ptr-p,*ptr-a,**ptr);
    printf("\n-----------------------------------------------------------");
    printf("\nOpetration *ptr++");
    *ptr++;
    printf("\nptr-p:%d\n*ptr-a:%d\n**ptr:%d",ptr-p,*ptr-a,**ptr);
    printf("\n----------------------------------------------------------");
    printf("\nOpetration *++ptr");
    *++ptr;
    printf("\nptr-p:%d\n*ptr-a:%d\n**ptr:%d",ptr-p,*ptr-a,**ptr);
    printf("\n----------------------------------------------------------");
    printf("\nOpetration ++*ptr");
    ++*ptr;
    printf("\nptr-p:%d\n*ptr-a:%d\n**ptr:%d",ptr-p,*ptr-a,**ptr);
    printf("\n----------------------------------------------------------");
    return 0;
}
