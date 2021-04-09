#include<stdio.h>
int main()

{
    double A[12][12];

    int n,i,j,c,r;
    double sum=0.0;
    char ch[2];

    scanf("%d %c",&n,&ch);

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&A[i][j]);
        }
    }

    for(j=0;j<12;j++)
    {
        sum=sum+A[j][n];
    }

    if(ch[0]=='S')
        printf("%.1lf",sum);
        else if(ch[0]=='M')
        printf("%.1lf",sum/12);
    return 0;
}
