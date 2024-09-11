#include<stdio.h>
int main()
{
int n,i,cube;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      cube=i*i*i;
      printf("%d\n",cube);
    }
}
