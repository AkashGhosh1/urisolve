#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i,j;
    for(i= 1;i<= num;i++)
    {
       int a=i*i;
       int b=i*i*i;
       printf("%d %d %d\n",i,a,b);
       for(j=i;j<=i;j++)
       {
       int m=a+1;
       int n=b+1;
       printf("%d %d %d",j,m,n);
       }
       printf("\n");
    }
    return 0;
}
