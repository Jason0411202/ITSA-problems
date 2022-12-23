#include <stdio.h>
typedef long long int llt;
llt Find_Divisor(llt a,llt b)
{
    llt temp;
    llt fish;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }

    while(1)
    {
        fish=b%a;
        if(fish==0)
        {
            break;
        }
        b=a;
        a=fish;
    }
    return a;
}
int main()
{
    llt a,b;
    scanf("%lld%lld",&a,&b);
    printf("%lld\n",Find_Divisor(a,b));
}
