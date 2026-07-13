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
void bubble_sort(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int temp;
        int j;
        for(j=0;j<=n-2-i;j++)
        if(arr[j]>arr[j+1])
        {
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
int main()
{
    int arr[]={5,4,3,2,1};
    int n=5;
    display(arr,n);
    bubble_sort(arr,n);
    display(arr,n);
    return 0;
}
