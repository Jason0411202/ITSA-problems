#include <stdio.h>
int main()
{
    int a,b,c,d;
    int hour,minute;
    int time;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    hour=c-a;
    minute=d-b;
    if(minute<0)
    {
        minute+=60;
        hour-=1;
    }
    time=(hour*60+minute)/30;
    if(time<=4)
    {
        printf("%d\n",time*30);
    }
    else if(time>4 && time<=8)
    {
        printf("%d\n",4*30+(time-4)*40);
    }
    else
    {
        printf("%d\n",4*30+4*40+(time-8)*60);
    }
    return 0;
}
