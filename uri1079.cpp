#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    double ans,ans0,ans1,ans2;

    for(int i=1;i<=t;i++)
    {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    ans0=((a/10)*2);
    ans1=((b/10)*3);
    ans2=((c/10)*5);
    ans=(ans0+ans1+ans2);
    printf("%.1lf",ans);
    }

    return 0;
}
