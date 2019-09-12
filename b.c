#include<stdio.h>
int main() {
    int i , n , first , middle , last , search ,arr[100];
    printf("Enter number of elements");
    scanf("%d", n);
    printf("Enter elements", n);
    for(i = 0 ; i < n ; i++) 
        scanf("%d", &arr[i]);
    printf("enter element to search");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while(first <= last) {
        if(middle < search) 
            first = middle + 1;
        else if(middle == search) {
            printf("element found at %d position ", search ,middle + 1);
            break;
        }
        else 
            last = middle - 1;
     }
    if( first > last )
        printf("element not found");
    return 0;
}
        
            
        
    
