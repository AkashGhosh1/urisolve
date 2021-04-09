#include<stdio.h>
int main()

{
    int t;
    scanf("%d",&t);
    int i,j,x,y;

    for(i=1;i<=t;i++)
    {
        int ans=0;
        int count=0;
        scanf("%d %d",&x,&y);
        for(j=x; ;j++)
        {

            if(j%2!=0)
            {
             ans=ans+j;
              count++;
            }
            else if(count==y)
            break;
        }
        printf("%d\n",ans);
    }
    return 0;
}
