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
       printf("%d %d %d",i,a,b);
       printf("\n");
    }
    return 0;
