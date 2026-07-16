#include<stdio.h>
void display(int arr[],int n)
{
    printf("array elements - ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }    
    printf("\n");
}
int delete(int arr[], int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (arr[i]==x)
          {
            for(int j=i;j<n-1;j++)
            arr[j]=arr[j+1];
          }  
    }
    return n-1;
}
int main()
{
    int arr[]={2,3,4,5,6};
    int n=5;
    int x=4;
    display(arr,n);
    n=delete(arr,n,x);
    display(arr,n);
    return 0;
}
