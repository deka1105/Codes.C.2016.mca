#include<stdio.h>
void swapref(int *x, int *y){
	int z;
	printf("\nX=%d",*x);
	printf("\nY=%d",*y);
	z=*x;
	*x=*y;
	*y=z;
	printf("\nCALL BY REFRENCE");
	printf("\nX=%d",*x);
	printf("\nY=%d",*y);
    printf("\n-----------------------------------------------------------------------------");
}
void swapval(int x, int y){
	int z;
	printf("\n");
	printf("\nX=%d",x);
	printf("\nY=%d",y);
	z=x;
	x=y;
	y=z;
	printf("\nCALL BY VALUE");
	printf("\nX=%d",x);
	printf("\nY=%d",y);
	printf("\n-----------------------------------------------------------------------------");

}
int main(){
	int x,y;
	printf("Enter 2 numbers:");
	scanf("%d%d",&x,&y);
	swapref(&x,&y);
	swapval(x,y);
	printf("\n");
	return 0;
}
/*
OUTPUT:
Enter 2 numbers:55 77

X=55
Y=77
CALL BY REFRENCE
X=77
Y=55
-----------------------------------------------------------------------------

X=77
Y=55
CALL BY VALUE
X=55
Y=77
-----------------------------------------------------------------------------
*/
