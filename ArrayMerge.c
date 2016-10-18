#include<stdio.h>
int main(){
    int n,m,i,a[20],b[20],c[40],rev[40];
    printf("\nEnter the length of the first array:");
    scanf("%d",&n);
    printf("\nEnter Elements of the first array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEnter the length of the second array:");
    scanf("%d",&m);
    printf("\nEnter Elements of the second array:");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
        c[i]=a[i];
    for(i=0;i<m;i++)
        c[i+n]=b[i];
    printf("\n----------------\n");
    printf("A={");
    for(i=0;i<n;i++)
        printf("%d ",c[i]);
    printf("}");
    printf("\n----------------\n");
    printf("B={");
    for(i=n;i<n+m;i++)
        printf("%d ",c[i]);
    printf("}");
    printf("\n----------------\n");
    printf("C={");
    for(i=0;i<n+m;i++)
        printf("%d ",c[i]);
    printf("}");

    for(i=0;i<n+m;i++)
        rev[i]=c[(n+m)-1-i];

    printf("\n----------------\n");
    printf("REV={");
    for(i=0;i<n+m;i++)
        printf("%d ",rev[i]);
    printf("}");
    printf("\n----------------\n");
    printf("\n");
    return 0;
}
/*
Output:
Enter the length of the first array:5

Enter Elements of the first array:1
2
3
4
5

Enter the length of the second array:5

Enter Elements of the second array:6
7
8
9
0

----------------
A={1 2 3 4 5 }
----------------
B={6 7 8 9 0 }
----------------
C={1 2 3 4 5 6 7 8 9 0 }
----------------
REV={0 9 8 7 6 5 4 3 2 1 }
----------------


*/
