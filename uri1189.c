#include<stdio.h>
int main()

{
    int i,j;
    double A[12][12];
    int n=1,k=10;
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




    for(i=0;i<5;i++)
    {
        for(j=n;j<=k;j++)
        {
           sum=sum+A[j][i];
        }
        n++;
        k--;
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


