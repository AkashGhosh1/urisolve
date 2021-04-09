#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int col,row;
    int num=0;
    if(b<100000 && a>1 && a<20 && a<b)
    {
    for(row=1;row<=b/a;row++)
    {
        for(col=1;col<=a;col++)
        {
            num=num+1;
            printf("%d ",num);
        }
        printf("\n");
    }
    }
    return 0;
}
