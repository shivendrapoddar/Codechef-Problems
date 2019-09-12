#include<stdio.h>
int main() { 
    int search, elements , n , i , arr[100];
    printf("Enter elements /n ");
    scanf("%d", &arr[100]);
    for(i = 0 ; i < n ; i++) {
        printf("Enter element to search");
        scanf("%d ", &search);
    }
    for(i = 1 ; i < n ; i++) {
        if(search == arr[i])
            printf(" element found ");
        else
            printf(" not found ");
        }
    return 0;
}   
    
