#include<stdio.h>
int main()
{
    int arr[100],n,t,c,d;
    printf("Enter number of elements \n");
    scanf("%d", &n);
    printf("enter %d integers", n);
    for(c = 0; c < n; c++)
        {
            scanf("%d", &arr[c]);
        }
    for(c = 1; c <= n - 1 ;c++)
    {
        d = c;
        while(d > 0 && arr[d] < arr[d - 1])
        {
            t = arr[d];
            arr[d] = arr[d - 1];
            arr[d - 1] = t;
            d--;
        }
    }
    printf("sorted order: \n ");
    for(c = 0; c <= n - 1; c++)
    printf("%d \n ", arr[c]); 
    return 0;
}
        
