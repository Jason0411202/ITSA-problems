#include <stdio.h>
typedef long long int llt;
int main()
{
    llt n;
    llt ans;
    llt temp;
    scanf("%lld",&n);

    temp=n/3;

    ans=temp*(1+temp)/2;
    printf("%lld\n",ans*3);
}
