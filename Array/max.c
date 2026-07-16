#include<stdio.h>
void display(int arr[],int n)
{
    printf("array elements - ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\n");
}
int getmax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
    int arr[]={1,2,45,4,5};
    int n=5;
    display(arr,n);
    printf("max element is %d",getmax(arr,n));
    return 0;
}
