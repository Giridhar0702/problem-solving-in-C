#include <stdio.h>  

int main()
{
  int vote_age;   
  printf("Input the age of the candidate : ");
  scanf("%d",&vote_age);   

  if (vote_age<18)   
  {
    printf("You are not eligible to vote.\n");   
    
  else
    printf("You are eligible to vote.\n");  
