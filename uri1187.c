#include<stdio.h>
int main()

{
    int i,j;
    double A[12][12];
    int n=10,k=1;
    double sum=0.0;
    char ch[2];
    scanf("%c",&ch);

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&A[i][j]);
        }
    }

    for(i=0;i<=5;i++)
    {
        for(j=i+1;j<=n;j++)
        {
           sum=sum+A[i][j];
        }
        n--;
    }
    if(ch[0]=='S')
    {
        printf("%.1lf\n",sum);
    }

    else if(ch[0]=='M')
    {
     printf("%.1lf\n",sum/30.0);
    }
   return 0;
}
