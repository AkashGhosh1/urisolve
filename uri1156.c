#include<stdio.h>
int main()

{
    int i;
    double ans=0;
    double j=1.0;


      for(i=1;i<=39;i=i+2)
        {
            ans = ans + (i/j);
            j=j+j;
        }
    printf("%.2lf\n",ans);
    return 0;
}

