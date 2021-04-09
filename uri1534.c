#include<stdio.h>
int main()

{
    int i,j,k,l;
    int n;

   while(scanf("%d",&n)!=EOF)
    {

    int A[n][n];

   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==j)
           {
               A[i][j]=1;
           }
        else{
            A[i][j]=3;
           }
           if(j==(n-1)-i)
           {
              A[i][j]=2;
           }

       }

   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%d",A[i][j]);
       }
       printf("\n");
   }
    }
return 0;
}
