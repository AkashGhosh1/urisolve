#include<stdio.h>
int main()

{
    int j,x,y;

    while(1){

        scanf("%d",&x);
        if(x==0)
            break;
        int ans=0;
        int count=0;
        for(j=x; ;j++)
        {

            if(j%2==0)
            {
             ans=ans+j;
              count++;
            }
            else if(count==5)
            break;
        }
        printf("%d\n",ans);
    }
    return 0;
}

