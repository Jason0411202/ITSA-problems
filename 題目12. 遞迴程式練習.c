#include <stdio.h>
typedef long long int llt;
llt f(llt n)
{
    if(n==0 || n==1)
    {
        return n+1;
    }
    else
    {
        return f(n-1)+f(n/2);
    }
}
int main()
{
    llt k;
    scanf("%lld",&k);
    printf("%lld\n",f(k));
    return 0;
}
