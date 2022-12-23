#include <stdio.h>

int main()
{
    double h;
    int type;
    while(scanf("%lf%d",&h,&type)!=EOF)
    {
        if(type==1)
        {
            printf("%.1lf\n",(h-80)*0.7);
        }
        else if(type==2)
        {
            printf("%.1lf\n",(h-70)*0.6);
        }
    }
    return 0;
}
