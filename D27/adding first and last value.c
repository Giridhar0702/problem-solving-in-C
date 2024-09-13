#include <stdio.h>
#include<stdlib.h>

int main()
{
 int n,sum,first;
 scanf("%d",&n);

     sum=abs(n%10);
      while(n!=0)
 {
     first=n;
    n=n/10;
  
     
 }
 printf("%d",first+sum);
    
    return 0;
}

