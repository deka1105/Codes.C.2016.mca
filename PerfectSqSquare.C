#include<stdio.h>
int main()
{
    int i, j, k, f2, l2, sq4;
    for(i=1; i<100; i++)
    {
        sq4=i*i;
        if(sq4>999 && sq4<10000)
        {
            //printf("\n %d\n", sq4);
            f2=sq4/100;
            l2=sq4%100;
            for(j=1; j<10; j++)
            {
                if(j*j==f2)
                {
                    for(k=1; k<10; k++)
                    {
                        if(k*k==l2)
                        {
                                printf("\n%d\t PERFECT", sq4);
                                printf("\nFirst two: \t%d", f2);
                                printf("\nlast two: \t%d", l2);
                        }
                    }
                }
            }
        }
    }
    printf("\n");
    return 0;
}
