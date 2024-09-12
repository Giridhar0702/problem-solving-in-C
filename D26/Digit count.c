#include <stdio.h>

int main()
{
     int n,digit=0;
     scanf("%d",&n);
     do{
         digit++;
         n=n/10;
     }
     while(n!=0);
     printf("%d",digit);
     

    return 0;
}
