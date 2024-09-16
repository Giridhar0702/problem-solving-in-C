#include<stdio.h>
int main(){
    int num,res=0,cpy;
    scanf("%d",&num);
    cpy=num;
    while(cpy>0){
        res=res*10;
        res=res+(cpy%10);
        cpy=cpy/10;
        
    }
    if(res==num){
    printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}
