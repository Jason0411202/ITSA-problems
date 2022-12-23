#include <stdio.h>
#include <math.h>
int main()
{
    int i=0;
    int a[10000];
    double avg=0;
    char temp;
    while(1)
    {
        i=0;
        avg=0;

        while(1)
        {
            if(scanf("%d",&a[i])==EOF)
            {
                return 0;
            }
            i++;
            scanf("%c",&temp);
            if(temp=='\n')
            {
                break;
            }
        }

        for(int j=0;j<i;j++)
        {
            avg+=a[j];
        }
        avg=avg/i;

        printf("Size: %d\n",i);
        avg=floor(avg*1000+0.5)/1000;
        printf("Average: %.3lf\n",avg);
    }
    return 0;
}
