#include <stdio.h>
#include <math.h>
typedef long long int llt;
int main()
{
    int X,Y;
    while(scanf("%d%d",&X,&Y)!=EOF)
    {
        if(X*X+Y*Y<=10000)
        {
            printf("inside\n");
        }
        else
        {
            printf("outside\n");
        }
    }
    return 0;
}
