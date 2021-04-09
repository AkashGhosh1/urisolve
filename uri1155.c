#include<stdio.h>
int main()

{
    int i;
    double m=1.0;
    double ans=0;

        for(i=1;i<=100;i++)
        {
            ans=ans+(m/i*1.0);
        }
         printf("%.2lf\n",ans);
         return 0;
}
