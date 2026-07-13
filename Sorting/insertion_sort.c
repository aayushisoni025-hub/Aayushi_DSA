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
void insertion_sort(int arr[], int n)
{
    int i;
    int temp;
    for(i=1;i<n;i++)
        {
            while(i>0&&arr[i-1]>arr[i])
            {
               temp = arr[i];
               arr[i]=arr[i-1];
               arr[i-1]=temp;
               i--;
            }
        }
}
    int main()
{
    int arr[]={5,4,3,2,1};
    int n=5;
    display(arr,n);
    insertion_sort(arr,n);
    display(arr,n);
    return 0;
}
