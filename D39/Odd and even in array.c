#include<stdio.h>
int main()
{
    int num,i,j=0,k=0;
    int a[30],b[30],c[30];
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Element%d:",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<num;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("even:");
    for(i=0;i<j;i++)
    {
        printf("%d ",b[i]);
    }
     printf(" odd:");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}
