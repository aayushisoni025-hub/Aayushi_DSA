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
int sec_max(int arr[],int n)
{
    int max= arr[0];
    int smax= -1;
    int i;
    {
        for(i=0;i<n;i++)
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        if(arr[i]>smax && arr[i]<max)
        smax=arr[i];
    }
    return smax;
}
int main()
{
    int arr[]={44,32,65,8,23};
    int n = 5;
    display(arr,n);
    printf("seconnd max is %d",sec_max(arr,n));
    return 0;
}
