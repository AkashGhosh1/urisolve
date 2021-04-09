#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int i,j;

    if(x<y){
    for(j=x+1;j<y;j++)
    {
        if(j%5==2 || j%5==3)
        {
            printf("%d\n",j);
        }
    }
    }

    if(x>y)
    {
    for(i=y+1;i<x;i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }
    }
    return 0;
}
