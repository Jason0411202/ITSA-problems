#include <stdio.h>

int main()
{
    double speed=0.238,temp_ans;
    int a,ans;

    while(scanf("%d",&a)!=EOF)
    {
        temp_ans=a/speed;
        ans=temp_ans;
        if(ans!=temp_ans)
        {
            ans+=1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
