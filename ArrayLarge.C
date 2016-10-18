#include<stdio.h>
int main(){
    int a[20],i,max=0,n,min;
    printf("\nEnter the length of the  array:");
    scanf("%d",&n);
    printf("\nEnter Elements of the  array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        max=(a[i]>max)?a[i]:max;
    min=max;
    for(i=0;i<n;i++)
        min=(a[i]<min)?a[i]:min;
    printf("\n----------------\n");
    printf("A={");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("}");
    printf("\n----------------\n");
    printf("\nMaximum=%d",max);
    printf("\n----------------\n");
    printf("\nMinimum=%d",min);
    printf("\n----------------\n");
    return 0;
}
/*
Output:
Enter the length of the  array:8

Enter Elements of the  array:88
99
2
4
5
6
100
0

----------------
A={88 99 2 4 5 6 100 0 }
----------------

Maximum=100
----------------

Minimum=0
----------------
*/
