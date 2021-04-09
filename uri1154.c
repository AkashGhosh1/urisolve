#include<stdio.h>
int main()
{
    int n;
    int ans=0;
    int count=0;
    while(1)
    {

        scanf("%d",&n);
        if(n<0)
            break;

        ans=(ans+n);
        count++;
    }
    double x=ans*1.0/count*1.0;
    printf("%.2lf\n",x);
    return 0;
}
