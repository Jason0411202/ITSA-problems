#include <stdio.h>
int Pow(int a,int b)
{
    int ans=1;
    for(int i=0;i<b;i++)
    {
        ans=ans*a;
    }
    return ans;
}

int main()
{
    int a;
    int ans[8];
    int temp;
    scanf("%d",&a);

    if(a<0)//負數
    {
        a=-a;
        ans[0]=1;

        for(int i=6;i>=0;i--)
        {
            temp=Pow(2,i);
            ans[6-i+1]=a/temp;
            a=a%temp;
        }

        for(int i=1;i<8;i++)//轉成反碼
        {
            if(ans[i]==0)
            {
                ans[i]=1;
            }
            else
            {
                ans[i]=0;
            }
        }

        for(int i=7;i>0;i--)//轉成補碼
        {
            if(ans[i]==0)
            {
                ans[i]=1;
                break;
            }
            else
            {
                ans[i]=0;
            }
        }
    }
    else
    {
        ans[0]=0;
        for(int i=6;i>=0;i--)
        {
            temp=Pow(2,i);
            ans[6-i+1]=a/temp;
            a=a%temp;
        }
    }

    for(int i=0;i<8;i++)
    {
        printf("%d",ans[i]);
    }
    printf("\n");
    return 0;
}
