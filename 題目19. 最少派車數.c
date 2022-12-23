#include <stdio.h>
typedef long long int llt;
int main()
{
    llt n,a,b;
    llt ans=-1;
    llt time[100]={0};
    scanf("%lld",&n);
    for(llt i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        for(llt j=a;j<b;j++)
        {
            time[j]++;
        }
    }

    for(llt i=0;i<100;i++)
    {
        if(time[i]>ans)
        {
            ans=time[i];
        }
    }
    printf("%lld\n",ans);
    return 0;
}
