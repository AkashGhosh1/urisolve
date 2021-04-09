#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,sum=0,sum1=0;
   int ans;

   scanf("%d %d",&a,&b);


       if(a>0 && b>0 || a==b){
       for(int i=a-1;i>=0;i--)
       {
           if(i%2!=0)
           {
               sum=sum+i;
           }
       }

       for(int i=b-1;i>=0;i--)
       {
           if(i%2!=0)
           {
               sum1=sum1+i;
           }
       }
        ans=sum-sum1;
        printf("%d\n",ans);
       }

       else if(b<0 && a>0){
       for(int i=a-1;i>=0;i--)
       {
           if(i%2!=0)
           {
               sum=sum+i;
           }
       }

       for(int i=b+1;i<=0;i++)
       {
           if(i%2!=0)
           {
               sum1=sum1+i;
           }
       }
        int ans1=sum+sum1;
        printf("%d\n",ans1);
       }
       return 0;
}
