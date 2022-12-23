#include <stdio.h>
#include <string.h>
typedef long long int llt;
int main()
{
    char str[500000];
    llt counter=0;
    llt answer[50]={0};
    llt n=0;
    gets(str);

    while(1)
    {
        if(str[counter]=='\0')
        {
            break;
        }

        if(str[counter]==' ')
        {
            n++;
        }
        counter++;
    }
    printf("%lld\n",n+1);
    for(int i=0;i<counter;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            answer[str[i]-'a']++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            answer[str[i]-'A']++;
        }
    }
    for(int i=0;i<30;i++)
    {
        if(answer[i]!=0)
        {
            printf("%c : %lld\n",'a'+i,answer[i]);
        }
    }
    return 0;
}
