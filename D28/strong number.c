#include <stdio.h>

int main()
{
    int n,i,q,rem,result=0,fact=1;
    scanf("%d",&n);
    q=n;
    while(q!=0){
        rem=q%10;
        for(i=1;i<=rem;i++){
            fact=fact*i;
            
        }
        result=result+fact;
        fact=1;
        q=q/10;
        
    }
    if(result==n){
        printf("it is strong number");
        
    }
    else{
        printf("invalid");
    }

    return 0;
}
