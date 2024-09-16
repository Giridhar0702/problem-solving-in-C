#include <stdio.h>

int main()
{
int num,first,last,temp,count,divider=1,swap,i;
scanf("%d",&num);
temp=num;
last=temp%10;
while(temp!=0){
    temp=temp/10;
    count++;
    
}
for(i=1;i<count;i++){
    divider=divider*10;
    
}
first=num/divider;
swap=num%divider;
swap=swap/10;
swap=last*divider+swap*10+first;
printf("%d",swap);

    return 0;
}
