#include <stdio.h>

int main()
{
    char a[1000];
    int move;
    gets(a);
    scanf("%d",&move);

    for(int i=0;i<10000;i++)
    {
        if(a[i]=='\0')
        {
            break;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            int temp=a[i]+move;
            if(temp>'z')
            {
                temp-=26;
            }
            a[i]=temp;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            while(move>26)
            {
                move-=26;
            }
            a[i]=a[i]+move;
            while(a[i]>'Z')
            {
                a[i]=a[i]-26;
            }
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            while(move>10)
            {
                move-=10;
            }
            a[i]=a[i]+move;
            while(a[i]>'9')
            {
                a[i]=a[i]-10;
            }
        }
    }
    printf("%s\n",a);
}
