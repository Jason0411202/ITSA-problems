#include <stdio.h>
typedef long long int llt;
int main()
{
    llt N,a1,a2,a3,sum;
    llt n1=0,n2=0,n3=0;
    scanf("%lld,%lld,%lld,%lld",&N,&a1,&a2,&a3);
    sum=N-a1*15-a2*20-a3*30;

    if(sum<0)
    {
        printf("0\n");
    }
    else
    {
        while(1)
        {
            if(sum-50>=0)
            {
                sum-=50;
                n1++;
            }
            else
            {
                break;
            }
        }
        while(1)
        {
            if(sum-5>=0)
            {
                sum-=5;
                n2++;
            }
            else
            {
                break;
            }
        }
        while(1)
        {
            if(sum-1>=0)
            {
                sum-=1;
                n3++;
            }
            else
            {
                break;
            }
        }
        printf("%lld,%lld,%lld\n",n3,n2,n1);
    }
}
