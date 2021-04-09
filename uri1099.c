#include<stdio.h>
int main()


{
    int x,y,i,j,k,t;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
    int sum=0;
    scanf("%d %d",&x,&y);
    if(x<y)
       {
        for(j=x+1;j<y;j++)
        {
            if(j%2!=0)
            {
                sum=sum+j;
            }
        }
       printf("%d\n",sum);

    }
    else if(x>y)
    {
        for(k=x-1;k>y;k--)
        {
            if(k%2!=0)
            {
                sum=sum+k;
            }
        }
         printf("%d\n",sum);

        }
        else
            printf("%d\n",sum);
    }
    return 0;

}
