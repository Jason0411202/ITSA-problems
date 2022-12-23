#include <stdio.h>

int main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b)!=EOF)
    {
        printf("%.1lf\n",a*b/2);
    }
    return 0;
}
