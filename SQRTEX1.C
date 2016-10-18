#include<stdio.h>
int main()
{
	double temp=17,i,track,ans,flag=0,bac,a,b,c,x1,x2;
	printf("\n Enter a,b,c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	temp=(b*b)-(4*a*c);
	if(temp<0)
		temp=(-1)*temp;
	for(i=1;i<=temp;i++)
	{
		ans=i*i;
		if(ans<=temp)
		{
			if(ans==temp)
			{
				flag=1;
				bac=i;
				break;
			}
			track=i;
			printf("\n i=%lf track=%lf",i,track);
		}
		else
			break;
	}
	if(flag==0)
	{
		printf("\n track=%lf",track);
		for(i=track;i<track+1;i+=0.000001)
		{
			ans=i*i;
			if(ans<=temp)
			{
				bac=i;
			}
			else
				break;
		}
	}
	printf("\n sqrt=%lf",bac);
	x1=(-b+bac)/(2*a);
	x2=(-b-bac)/(2*a);
	printf("\n x1=%lf x2=%lf",x1,x2);
	return 0;
}
/*Output:
Enter a,b,c:2 3 5

 i=1.000000 track=1.000000
 i=2.000000 track=2.000000
 i=3.000000 track=3.000000
 i=4.000000 track=4.000000
 i=5.000000 track=5.000000
 track=5.000000
 sqrt=5.567764
 x1=0.641941 x2=-2.141941
 */
