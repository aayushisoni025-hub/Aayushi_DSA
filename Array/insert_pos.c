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
int insert_pos (int arr[],int n,int x,int pos)
{
    for(int i= n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }    
    arr[pos]=x;
    return n+1;
}
int main()
{
    int arr[6]={2,5,1,7,9};
    display(arr,5);
    insert_pos(arr,6,3,1);
    display(arr,6);
}
