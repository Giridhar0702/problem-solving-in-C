#include <stdio.h>
int main()
{
    int a,i,sum;
    scanf("%d",&a);
    if(a<=20){
        while(i<=a){
            sum=sum+(i*i*i);
            i=i+2;
        }
        printf("Sum of cubes of even numbers up to %d:%d",a,sum);}
    else{
        printf("invalid");
    }
    return 0;
}


