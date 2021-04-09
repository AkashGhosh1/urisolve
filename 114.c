#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i,j;
    for(i= 1;i<= num*2;i++)
    {
        for(j=1;j<=2;j++)
    {
       int a=i*i;
       int b=i*i*i;
       printf("%d %d %d",i,a,b);
       printf("\n");
    }
    }
 return 0;
}
