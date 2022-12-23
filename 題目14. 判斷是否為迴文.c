#include <stdio.h>
typedef long long int llt;
int main()
{
    char a[100000];
    int flag=0;
    llt size=0;
    for(llt i=0;i<100000;i++)
    {
        a[i]=-1;
    }
    scanf("%s",&a);
    while(1)
    {
        if(a[size]=='\0')
        {
            break;
        }
        else
        {
            size++;
        }
    }
    for(llt i=0;i<size;i++)
    {
        if(a[i]!=a[size-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

}
