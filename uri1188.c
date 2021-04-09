#include<stdio.h>
int main()

{
    int i,j;
    double A[12][12];
    int n=5,k=1;
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




    for(i=7;i<12;i++)
    {
        for(j=n;j<=i-1;j++)
        {
           sum=sum+A[i][j];
        }

        n--;
        //f(n>=1)
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

