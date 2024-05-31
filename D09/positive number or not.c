#include<stdio.h>
int main()
{
 int num;
 printf("Input a number : "); 
 scanf("%d",&num);
 if(num>0)
 {
  printf("This is a positive integer\n");
 }
 else 
 {
  printf(" This is not a positive integer..Try again\n");
 }
}
