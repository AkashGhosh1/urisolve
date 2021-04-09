#include<stdio.h>
int main()

{
    double A[12][12];
    int i,j,r,c;

    char ch[2];

    double sum=0.0;

    scanf("%c",&ch);

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&A[i][j]);
        }
    }

    for(i=1;i<12;i++)
    {
        for(j=11;j>11-i;j--)
        {
            sum=sum+A[i][j];
        }
    }


    if(ch[0]=='S'){
        printf("%.1lf\n",sum);
        }
        else if(ch[0]=='M'){
     printf("%.1lf\n",sum/66.0);
    }

   return 0;
}


