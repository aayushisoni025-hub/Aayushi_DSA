#include<stdio.h>
int binary_search(int arr[], int n , int x)
{
int high = n-1;
int low = 0;
while(high>low)
{
    int mid=(high+low)/2;
    if(arr[mid]==x)
    {return mid;}
    else if(x>arr[mid])
    {low=mid+1;}
    else
    {high = mid-1;}
}    
return -1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof arr/sizeof arr[0];
    printf("%d",binary_search(arr,n,4));
    return 0;
}