#include <stdio.h>
#include <math.h>
typedef long long int llt;
int main()
{
    llt n;
    llt counter=0;
    llt temp;
    scanf("%lld",&n);
    if(n==1)
    {
        printf("NO\n");
    }
    else if(n==2)
    {
        printf("YES\n");
    }
    else
    {
        if(n%2==0)
        {
            printf("NO\n");
        }
        else
        {
            temp=n/2;
            for(int i=1;i<=temp;i++)
            {
                if(n%i==0)
                {
                    counter++;
                }
            }
            if(counter==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
