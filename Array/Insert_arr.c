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
int insert_beg (int arr[],int n,int x)
{
    for(int i= n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }    
    arr[0]=x;
    return n+1;
}
int main()
{
    int arr[6]={2,5,1,7,9};
    display(arr,5);
    insert_beg(arr,6,8);
    display(arr,6);
}
