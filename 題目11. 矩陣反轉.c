#include <stdio.h>
typedef long long int llt;
int main()
{
    llt row,col;

    while(scanf("%lld%lld",&row,&col)!=EOF)
    {
        llt input[row+10][col+10];
        llt output[col+10][row+10];
        for(llt i=0;i<row;i++)
        {
            for(llt j=0;j<col;j++)
            {
                scanf("%lld",&input[i][j]);
            }
        }
        for(llt i=0;i<col;i++)
        {
            for(llt j=0;j<row;j++)
            {
                if(j==0)
                {
                    printf("%lld",input[j][i]);
                }
                else
                {
                    printf(" %lld",input[j][i]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
