#include <stdio.h>
int main()
{
    int a,b,i,sum=0,count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        if(i%9==0){
            printf("%d\t",i);
            sum=sum+i;
            count+=1;
        
        }
        
    }
    printf("\n%d",sum);
        printf("\n%d",count);
        return 0;
}
