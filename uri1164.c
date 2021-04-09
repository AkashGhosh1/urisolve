#include<stdio.h>
int main()

{
    int t;
    scanf("%d",&t);

    int x,i,j;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&x);

        int ans=0;
        for(j=1;j<x;j++)
        {
            if(x%j==0)
            {
               ans=ans+j;
            }
        }
        if(ans==x)
        printf("%d eh perfeito\n",x);
        else
            printf("%d nao eh perfeito\n",x);
    }
}
