#include<stdio.h>
int main()

{
    int x;
    int i;

    while(1){
        scanf("%d",&x);

        for(i=1;i<=x;i++){
            printf("%d",i);
            if(i!=x)
            printf(" ");
        }
        printf("\n");
        if(x==0)
        break;
    }
    return 0;
}
