#include<stdio.h>

int main()
{
   int n, first = 0, second = 1, fibo, c;
   scanf("%d",&n);

   for ( c = 0 ; c < n-1 ; c++ )
   {
      if ( c <= 1 )
         fibo = c;
      else
      {
         fibo = first + second;
         first = second;
         second = fibo;
      }
      printf("%d ",fibo);
   }
    printf("%d\n",first+second);

   return 0;
}


