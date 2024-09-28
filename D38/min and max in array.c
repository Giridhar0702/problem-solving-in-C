#include<stdio.h>
int main(){
    int n,value[50],i,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&value[i]);
        
    }
    max=value[0];
    min=value[1];
    for(i=1;i<n;i++){
        if(value[i]>max){
            max=value[i];
        }
        if(value[i]<min){
            min=value[i];
        }}
        
        printf("%d\n",min);
        printf("%d\n",max);
    
}
