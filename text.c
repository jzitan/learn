#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i = 0;i < n;i++ )
    {
        scanf("%d",&m);
        for(int j = 0;j < m;j++)
        {
            for(int k = 0;k < j;k++)
            {
                printf(" ");
            }
            for(int k =0;k<2*m-1-2*j;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}