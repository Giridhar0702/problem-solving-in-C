#include <stdio.h>
int main()
{
    int num,i,j;
    char ch='A';
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
          printf("%c",ch);
          ch++;
        }       
        printf("\n");
    }
    return 0;
}
