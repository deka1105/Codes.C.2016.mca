#include<stdio.h>
int main(){
    int total=0,i,j,rows,cols,mul[3];
    int a[10][10];
    printf("\nEnter No. of Rows:");
    scanf("%d",&rows);
    printf("\nEnter No. of cols:");
    scanf("%d",&cols);
    //printf("\nEnter Elements for")
    for(i=0;i<rows;i++){
            printf("\nEnter Elements for Row %d:",i+1);
            printf("\n");
            for(j=0;j<cols;j++)
                    scanf("%d",&a[i][j]);
    }
    printf("\n----------------\n");
    for(i=0;i<rows;i++){
            for(j=0;j<cols;j++){
                printf("%d\t",a[i][j]);
                if(i==j){
                    mul[i]=a[i][j];
                    total+=mul[i];
                }
    }
    printf("\n");
    }
    printf("\n----------------\n");
    printf("Mul={");
    for(i=0;i<3;i++){
            if(i<3-1)
                printf("%d+",mul[i]);
            else
                printf("%d",mul[i]);
    }
    printf("}");
    printf("\n----------------\n");
    printf("Total=%d",total);
    printf("\n----------------\n");
    return 0;
}
/*
Output:
Enter No. of Rows:3

Enter No. of cols:3

Enter Elements for Row 1:
1
2
3

Enter Elements for Row 2:
4
5
6

Enter Elements for Row 3:
7
8
9
----------------
1	2	3
4	5	6
7	8	9

----------------
Mul={1+5+9}
----------------
Total=15
----------------

*/
