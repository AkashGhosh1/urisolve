#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double x,y;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        scanf("%lf %lf",&x,&y);

        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            double ans=x / y;
            printf("%.1lf\n",ans);
        }
    }
    return 0;
}
