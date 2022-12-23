#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long int llt;
llt FInd_Size(char str[100])
{
    llt ans=0;
    while(1)
    {
        if(str[ans]=='\0')
        {
            return ans;
        }
        ans++;
    }
}
int main()
{
    char str1[100],str2[100];
    llt str_ans[100];

    llt size_1,size_2,size_ans;
    llt N;
    llt flag=0;
    scanf("%lld",&N);
    for(llt i=0;i<N;i++)
    {
        scanf("%s%s",str1,str2);
        size_1=FInd_Size(str1);
        size_2=FInd_Size(str2);
        size_ans=0;
        flag=0;

        size_1--;
        size_2--;
        while(1)
        {
            if(size_1==-1 && size_2==-1)
            {
                if(flag==1)
                {
                    str_ans[size_ans]=1;
                    size_ans++;
                }
                break;
            }
            else if(size_1<0)
            {
                while(size_2>=0)
                {
                    if((str2[size_2]-'0')+flag>=10)
                    {
                        str_ans[size_ans]=(str2[size_2]-'0')+flag-10;
                        flag=1;
                    }
                    else
                    {
                        str_ans[size_ans]=(str2[size_2]-'0')+flag;
                        flag=0;
                    }

                    size_2--;
                    size_ans++;
                }
                continue;
            }
            else if(size_2<0)
            {
                while(size_1>=0)
                {
                    if((str1[size_1]-'0')+flag>=10)
                    {
                        str_ans[size_ans]=(str1[size_1]-'0')+flag-10;
                        flag=1;
                    }
                    else
                    {
                        str_ans[size_ans]=(str1[size_1]-'0')+flag;
                        flag=0;
                    }

                    size_1--;
                    size_ans++;
                }
                continue;
            }

            if((str1[size_1]-'0')+(str2[size_2]-'0')+flag>=10)
            {
                str_ans[size_ans]=(str1[size_1]-'0')+(str2[size_2]-'0')+flag-10;
                flag=1;
            }
            else
            {
                str_ans[size_ans]=(str1[size_1]-'0')+(str2[size_2]-'0')+flag;
                flag=0;
            }
            size_1--;
            size_2--;
            size_ans++;
        }

        for(llt j=size_ans-1;j>=0;j--)
        {
            printf("%lld",str_ans[j]);
        }
        printf("\n");
    }
}
