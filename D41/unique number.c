#include<stdio.h>
int main(){
    int n,arr[50],i;
    int visited[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        visited[i]=0;

    }
    for(i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
        int count=1;
        for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j])
        {
            count++;
            visited[j]=-1;
        
        }
    }
        if(count==1)
            printf("%d %d\n",arr[i],count);
            visited[i]=-1;
            
    
}
}
}
