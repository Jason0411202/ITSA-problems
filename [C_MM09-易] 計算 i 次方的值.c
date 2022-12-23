#include <stdio.h>
typedef long long int llt;

int main()
{
    llt i;
    while(scanf("%lld",&i)!=EOF)
    {
        if(i>31)
        {
            printf("Value of more than 31\n");
            continue;
        }
        printf("%lld\n",1<<i);
    }
    return 0;
}
