#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    double b;
    while(scanf("%d",&a)!=EOF)
    {
        b=a*1.6;
        b=floor(b*10+0.5)/10;
        printf("%.1lf\n",b);
    }
}
