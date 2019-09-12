#include<stdio.h>
int main()
{
    int arr[100],n,c,s;
    printf("Enter number of elements: \n ");
    scanf("%d", &n);
    printf("Enter %d integers", n);
    for(c = 0; c < n; c++)
        scanf("%d", &arr[c]);
    printf("Enter the number to search" );
    scanf("%d", &s);
    for(c = 0; c < n; c++)
    {
        if(arr[c] == s)
        {
            printf("number found at location %d " ,c + 1);
            break;
        }
    }
    if(c == n)
        printf("%d not present in the array \n", s);
    return 0;
}
