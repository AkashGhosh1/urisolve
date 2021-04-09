#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int i;
    int cnt=0;
    if(x<y){

    for(i=x;i<=y;i++)
    {
        if(i%13!=0)
        {
            cnt=cnt+i;
        }
    }
    printf("%d\n",cnt);
    return 0;
    }
    if(y<x){

    for(i=y;i<=x;i++)
    {
        if(i%13!=0)
        {
            cnt=cnt+i;
        }
    }
    printf("%d\n",cnt);
    return 0;
    }
}
