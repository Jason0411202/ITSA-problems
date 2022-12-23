#include <stdio.h>

void Quick_Sort(int a[4],int Front,int End)
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
            Quick_Sort(a,Front,i-1);
        }
        if(i<End)
        {
             Quick_Sort(a,i+1,End);
        }

    }
}

int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    Quick_Sort(a,0,3);

    if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
    {
        printf("WIN\n");
    }
    else if(a[0]==a[1] && a[2]!=a[0] && a[3]!=a[0])
    {
        printf("%d\n",a[2]+a[3]);
    }
    else
    {
        printf("R\n");
    }
    return 0;
}
