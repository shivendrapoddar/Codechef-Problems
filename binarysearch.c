#include<stdio.h>
int main() {
    int i , n , first , middle , last ,search , arr[100];
    printf("Enter no. of elements");
    scanf("%d", &n);
    printf("Enter  numbers",n);
    for(i = 0 ; i < n ; i++ ) 
        scanf("%d", &arr[i]);
    printf("Enter element to search");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = first + last / 2;
    while(first <= last) {
        if(arr[middle] < search) 
            first = middle + 1 ; 
        else if(arr[middle] == search) {
            printf("Element found at %d position", middle + 1);
            break;
            }
        else    
            last = middle - 1;
            middle = first + last / 2;
    }
    if(first > last)
        printf("Element not found ");
    return 0;
}
    

