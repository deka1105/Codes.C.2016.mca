#include<stdio.h>
#include<math.h>
int main(){
    int b[10],a[]={4,36,45,50,75},i,sizy,j,temp,AM=0;
    long int GM=1;
    double p,GM2;
    sizy=(sizeof(a)/4);
    printf("\n----------------\n");
    printf("First={");
    for(i=0;i<sizy;i++)
        printf("%d ",a[i]);
    printf("}");
    printf("\n----------------\n");
    /*
    //copy
    for(i=0;i<sizy;i++)
        b[i]=a[i];
    //sort
    for(i=0;i<sizy;i++){
        for(j=i;j<sizy-1;j++){
                printf("\n%d",a[j]);
            if(b[j]<b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("\n----------------\n");
    printf("First={");
    for(i=0;i<sizy;i++)
        printf("%d ",b[i]);
    printf("}");
    printf("\n----------------\n");
    printf("\n");
    */
    for(i=0;i<sizy;i++){
        AM+=a[i];
        GM*=a[i];
    }
    printf("\nG.Mean=%ld",GM);
    AM=AM/sizy;
    p=1/5.0;
    printf("\nP:%lf",p);
    GM2=pow(GM,p);
    printf("\nA.Mean=%d",AM);
    printf("\nG.Mean=%lf",GM2);
    printf("\n----------------\n");
    printf("\n");
    return 0;
}
