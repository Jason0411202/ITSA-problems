#include <stdio.h>
#include <math.h>
int main()
{
    double a,b;
    while(scanf("%lf",&a)!=EOF)
    {
        b=a*a;
        b=floor(b*10+0.5)/10;
        printf("%.1lf\n",b);
    }
    return 0;
}
