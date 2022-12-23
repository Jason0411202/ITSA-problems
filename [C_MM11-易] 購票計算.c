#include <stdio.h>

int main()
{
    int a;
    int counter=0;
    while(scanf("%d",&a)!=EOF)
    {
        counter=0;
        while(a-10>=0)
        {
            a-=10;
            counter++;
        }
        printf("NT10=%d\n",counter);

        counter=0;
        while(a-5>=0)
        {
            a-=5;
            counter++;
        }
        printf("NT5=%d\n",counter);

        counter=0;
        while(a-1>=0)
        {
            a-=1;
            counter++;
        }
        printf("NT1=%d\n",counter);
    }
    return 0;
}
