#include <stdio.h>
typedef long long int llt;

int main()
{
    double r;
    llt n,p;
    scanf("%lf%lld%lld",&r,&n,&p);

    double answer=0;
    llt ans;

    for(llt i=0;i<n;i++)
    {
        answer=answer+p;
        answer=answer+answer*r;
    }
    ans=(llt)answer;
    printf("%lld\n",ans);

    return 0;
}
