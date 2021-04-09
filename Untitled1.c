#include<stdio.h>
int main()

{

    int i,j,n;

   while(1){
    long long int a=1,b=1;
    scanf("%d",&n);
    long long int A[n][n];
    if(n==0) break;
    for(i=0;i<n;i++)
    {


        for(j=0;j<n;j++)
        {
            A[i][j]=a;

            a=a*2;

        }
        a=2*b;
        b=b*2;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(n==1) printf("%lld",A[i][j]);
            if(n==2)
            {
                if(j==0)
                    printf("%lld",A[i][j]);
                    else
                        printf(" %lld",A[i][j]);
            }
            else if(n==3 || n==4)
            {
                if(j==0)
                    printf("%2lld",A[i][j]);
                    else
                        printf("%3lld",A[i][j]);
            }
            else if(n==5)
            {
                if(j==0)
                    printf("%3lld",A[i][j]);
                    else
                        printf("%4lld",A[i][j]);
            }
            else if(n==6 || n==7)
            {
                if(j==0)
                    printf("%4lld",A[i][j]);
                    else
                        printf("%5lld",A[i][j]);
            }
             else if(n==8 || n==9)
            {
                if(j==0)
                    printf("%5lld",A[i][j]);
                    else
                        printf("%6lld",A[i][j]);
            }
            else if(n==10)
            {
                if(j==0)
                    printf("%6lld",A[i][j]);
                    else
                        printf("%7lld",A[i][j]);
            }
            else if(n==11 || n==12)
            {
                if(j==0)
                    printf("%7lld",A[i][j]);
                    else
                        printf("%8lld",A[i][j]);
            }
            else if(n==13 || n==14)
            {
                if(j==0)
                    printf("%8lld",A[i][j]);
                    else
                        printf("%9lld",A[i][j]);
            }
            else if(n==15)
            {
                if(j==0)
                    printf("%9lld",A[i][j]);
                    else
                        printf("%10lld",A[i][j]);
            }


        }
         printf("\n");
    }
    printf("\n");
   }
return 0;
}
