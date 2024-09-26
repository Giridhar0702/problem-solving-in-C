#include<stdio.h>
int main(){
    int n,arr[100],i,j,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++){
        
        if(arr[i]+arr[j]==sum){
            printf("\n%d,%d",arr[i],arr[j]);
            arr[j]=-1;

            
        }
    }
}
