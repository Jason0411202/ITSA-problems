#include <stdio.h>
#include <string.h>
typedef long long int llt;

int main()
{
    char str1[500000],str2[500000];
    llt len1=0,len2=0;
    int flag=0;
    llt ans=0;
    scanf("%s",str1);
    scanf("%s",str2);

    while(1)
    {
        if(str1[len1]=='\0')
        {
            break;
        }
        len1++;
    }
    while(1)
    {
        if(str2[len2]=='\0')
        {
            break;
        }
        len2++;
    }
    //printf("%lld %lld\n",len1,len2);
    for(llt i=0;i<len2-len1+1;i++)
    {
        flag=0;
        for(llt j=0;j<len1;j++)
        {
            if(str1[j]!=str2[i+j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ans++;
        }
    }
    printf("%lld\n",ans);

    return 0;
}
