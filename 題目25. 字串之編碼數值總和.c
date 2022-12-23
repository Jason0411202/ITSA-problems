#include <stdio.h>
int main()
{
    char a[10000];
    int t,ans;
    char trash;
    scanf("%d",&t);

    scanf("%c",&trash);
    for(int i=0;i<t;i++)
    {
        ans=0;
        gets(a);
        for(int i=0;;i++)
        {
            if(a[i]=='\0')
            {
                break;
            }
            else
            {
                ans+=(int)a[i];
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
