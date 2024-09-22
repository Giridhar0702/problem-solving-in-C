/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n,i,j,p,q;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
     if(i%2==0){
         p=0;
         q=1;
     }
     else{
         p=1;
         q=0;
     }
     for(j=1;j<=i;j++){
         if(j%2==0){
             printf("%d",p);
             
         }
     
     else{
         printf("%d",q);
     }}
     printf("\n");
  }

    return 0;
}
