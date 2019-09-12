#include<stdio.h>
int main() {
    int n , c , d , arr[100] , swap;
    printf("Enter number of elements");
    scanf("%d", &n);
    printf("Enter elements",n);
    for(c = 0 ; c < n ; c++) 
        scanf("%d", &arr[c]);
    for(c = 0 ; c < n - 1 ; c++) {
        for(d = 0 ; d < n - c - 1 ; d++) {
            if(arr[d] > arr[d + 1]) {
                swap = arr[d];
                arr[d] = arr[d + 1];
                arr[d + 1] = swap;
             }   
         }
    }
    for(c = 0 ;c < n ;c++) {
        printf("%d ",arr[c]);
    }
    return 0;
} 
