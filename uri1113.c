#include<stdio.h>
int main()

{
   int x,y;

   int i;

   while(1)
   {
       if(x==y)
        break;
       scanf("%d %d",&x,&y);

       if(x>y)
       printf("Decrescente\n");

       else if(x<y)
        printf("Crescente\n");
   }
   return 0;
}
