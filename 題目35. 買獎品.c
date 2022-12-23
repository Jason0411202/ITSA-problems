#include <stdio.h>

void Quick_Sort(int k,int a[k+10],int Front,int End)
{
    int i=Front-1;
    int temp;
    if(Front==End)
    {
        return;
    }
    else
    {
        for(int j=Front;j<End;j++)
        {
            if(a[j]<a[End])
            {
                i++;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        i++;
        temp=a[i];
        a[i]=a[End];
        a[End]=temp;
        if(i>Front)
        {
            Quick_Sort(k,a,Front,i-1);
        }
        if(i<End)
        {
             Quick_Sort(k,a,i+1,End);
        }

    }
}

int main()
{
    int n,sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum=0;
        int T,m,k;
        scanf("%d%d%d",&T,&m,&k);
        int a[k+10];
        for(int j=0;j<k;j++)
        {
            scanf("%d",&a[j]);
        }

        Quick_Sort(k,a,0,k-1);

        for(int j=0;j<m;j++)
        {
            sum+=a[j];
        }
        if(sum<=T)
        {
            printf("%d\n",sum);
        }
        else
        {
            printf("Impossible\n");
        }
    }
    return 0;
}
