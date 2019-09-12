#include<stdio.h>
int main() {
    int n , i , search , arr[100] ;
    printf("Enter number of elements");
    scanf("%d", &n);
    printf("Enter elements",n);
    for(i = 0 ; i < n ; i++) 
        scanf("%d", &arr[i]);
    printf("Enter element to search");
    scanf("%d", &search);
    for(i = 0 ; i < n ; i++) {
        if(search == arr[i]) { 
            printf("element found at %d position", i + 1);
            break;
        }
    }
    if(i == n)
        printf("element not found",search);
    return 0;
} 
    
    
