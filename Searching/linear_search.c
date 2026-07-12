#include <stdio.h>
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d",i);
        }
       
    }
     return -1;
}
int main()
{
    int arr[6] = {23, 4, 6, 25, 87, 1};
    int n = 6;
    search(arr, n, 25);
}
