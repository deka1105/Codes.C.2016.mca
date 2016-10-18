#include<stdio.h>
void add(int,int);
void sub(int,int);
void mod(int,int);
void mul(int,int);
void div(int,int);
void swi(int,int);
int main(){
	int x, y;
	printf("\nEnter 2 numbers:");
	scanf("%d%d",&x,&y);
	swi(x,y);
	return 0;
}
void swi(int x,int y){
	int n;
	printf("\n");
	printf("\n1. For Addition");
	printf("\n2. For Substraction");
	printf("\n3. For Multiplication");
	printf("\n4. For Division");
	printf("\n5. For Modulous");
	printf("\n6. EXIT");
	scanf("\n%d",&n);
       //	printf("\nNumbers are:%d&%d\n",x,y);
       //	printf("Your choce is %d",n);
	switch (n){
		case 1:
			add(x,y);
			break;
		case 2:
			sub(x,y);
			break;
		case 3:
			mul(x,y);
			break;
		case 4:
		       div(x,y);
			break;

		case 5:
			mod(x,y);
			break;
		case 6:
			break;
		default:
			printf("\nInvalid Input");
			printf("\n Try Again");
			swi(x,y);
			break;
		}
}
void add(int x, int y){
	printf("\n");
	printf("\nAddition=%d",x+y);
	swi(x,y);
}
void sub(int x,int y){
	printf("\n");
	printf("\n(%d-%d)Substraction=%d",x,y,x-y);
	printf("\n(%d-%d)Substraction=%d",y,x,y-x);
	swi(x,y);
}
void mul(int x,int y){
	printf("\n");
	printf("\nMultiplication=%d",x*y);
	swi(x,y);
}
void div(int x,int y){
	printf("\n");
	printf("\n(%d/%d)Division=%d",x,y,x/y);
	printf("\n(%d/%d)Division=%d",y,x,y/x);
	swi(x,y);
}
void mod(int x,int y){
	printf("\n");
	printf("\n(%d%%d)Modulous=%d",x,y,x%y);
	printf("\n(%d%%d)Modulous=%d",y,x,y%x);
	swi(x,y);
}
/*
OUTPUT:
Enter 2 numbers:44
55


1. For Addition
2. For Substraction
3. For Multiplication
4. For Division
5. For Modulous
6. EXIT4


(44/55)Division=0
(55/44)Division=1

1. For Addition
2. For Substraction
3. For Multiplication
4. For Division
5. For Modulous
6. EXIT2


(44-55)Substraction=-11
(55-44)Substraction=11

1. For Addition
2. For Substraction
3. For Multiplication
4. For Division
5. For Modulous
6. EXIT6

*/
