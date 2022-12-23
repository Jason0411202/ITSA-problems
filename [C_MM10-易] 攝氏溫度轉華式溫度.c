#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        a=a*9/5+32;
        a=floor(a*10+0.5)/10;
        printf("%.1lf\n",a);
    }
    return 0;
}
