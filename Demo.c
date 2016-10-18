//#include<conio.h>
#include<stdio.h>
int main() {
  /* code */
  //float i,j;
  double i,j,ans;
  int count=0;
  i=j=ans=0;
  printf("\ni=%f",i);
  printf("\nj=%f",j);
  printf("\n");
  printf("\nans=%f",ans);
  for ( i = 1.0; i < 2.100; i+=0.001) {
    /* code */
    for ( j = 1.0; j < 2.100; j+=0.001) {
      /* code */
      ans=0.0;
      ans=i*j;
      count++;
      //printf("\ni=%f",i);
      //printf("\nj=%f",j);
      //printf("\nans=%f",ans);
      printf("\n%lf x %lf = %lf",i,j,ans);
      //printf("\n");
    }
  }
  printf("\n Count:%d",count);
  printf("\n");
  return 0;
}
