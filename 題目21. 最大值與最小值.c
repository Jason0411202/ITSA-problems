#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long int llt;
#define INF 0x3f3f3f3f3f3f3f3f
int main()
{
    double max=-INF,min=INF,temp;
    for(llt i=0;i<10;i++)
    {
        scanf("%lf",&temp);
        if(temp>max)
        {
            max=temp;
        }
        if(temp<min)
        {
            min=temp;
        }
    }
    printf("maximum:%.2lf\n",max);
    printf("minimum:%.2lf\n",min);

    return 0;


}
