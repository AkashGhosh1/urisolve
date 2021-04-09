#include<stdio.h>
int main()

{
    int i,j;
    int n,t;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        int count=0;
        scanf("%d",&n);

        for(j=2;j<n;j++)
        {
            if(n%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            {
                printf("%d eh primo\n",n);
            }
            else
                printf("%d nao eh primo\n",n);
    }
    return 0;
}
