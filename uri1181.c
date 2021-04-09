#include<stdio.h>

int main()

{
    double M[12][12],sum=0.0;
    int i,j,k,a;
    char c[2];
    scanf("%d %s",&a,&c);

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }

      for(i=0;i<12;i++)
      {
          sum +=M[a][i];
      }
      if(c[0]=='S'){
        printf("%.1lf\n",sum);
      }

        else if(c[0]=='M'){
            printf("%.1lf\n",sum/12);
        }
        return 0;
}
