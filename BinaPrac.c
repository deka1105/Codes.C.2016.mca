#include<stdio.h>
/*int binaryN(int n){
    static int bin;
    if(n>0){
        bin=bin*10+n%2;
        n/=2;
        printf("\n Binary=%d",bin);
        binaryN(n);
    }
        return bin;
}
int main(){
    int n=13;
    int biny;
    biny=binaryN(n);
    printf("\n Binary=%d",biny);
    return 0;
}
int fun(int k){
    k++;
    return k;
}
int function1(int j,int b){
    int c;
    c=j+b;
    return c;
}
int main(){
    int k=35;int i=135,a=135,k1;
    printf("\n%d",printf("%d%d",k,k));
    k=fun(k=(fun(k=fun(k))));
    printf("\n K=%d",k);
    k1=function1(!++i,!a++);
    printf("\n i=%d,a=%d,k=%d",i,a,k1);
    return 0;
}
#include <stdio.h>
void printName(char* name,int count)
{
	printf("%02d : %s\n",count+1,name);
	count+=1;
	if(count<10)
		printName(name,count);
}
int main()
{
	char name[50];
	printf("\nEnter you name :");
	scanf("%s",name);
	printName(name,0);
	return 0;
}
*/
#include <stdio.h>
#include <termios.h> // in gcc, use < conio.h > in turboc
#include <string.h>

#define USERNAME    "user001"
#define PASSWORD    "ok@123"

/************************************************
THIS CODE IS USED IN GCC LINUX
because getch() is not defined in library file
************************************************/

static struct termios old, new;

/* Initialize new terminal i/o settings */
void initTermios(int echo)
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  new = old; /* make new settings same as old settings */
  new.c_lflag &= ~ICANON; /* disable buffered i/o */
  new.c_lflag &= echo ? ECHO : ~ECHO; /* set echo mode */
  tcsetattr(0, TCSANOW, &new); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void)
{
  tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo)
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void)
{
  return getch_(0);
}

/* Read 1 character with echo */
char getche(void)
{
  return getch_(1);
}

/* function :   getPassword(),
   to get password from keyboard    */

void getPassword(char *pass)
{
    int c=0;
    char buff[30]={0},ch;
    int len=0;
    while((ch=getch())!='\n')
    {
        if(ch==0x7f)    // use 0x08 in turboc (WINDOWS)
        {
            if(len==0)  continue;
            printf("\b \b"); len--; continue;
        }
        printf("%c",'*');
        pass[len]=ch;
        len++;
    }
    pass[len]='\0';

}

int main()
{

    char user[30],pass[30];
    printf("Enter User Name :");
    gets(user);
    printf("Enter Password  :");
    getPassword(pass);

    if(strcmp(user,USERNAME)==0 && strcmp(pass,PASSWORD)==0)
        printf("\nLOGIN SUCCESS.\n");
    else
        printf("\nLOGIN FAILED.\n");
    return 0;
}
