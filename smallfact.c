#include<stdio.h>
int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        int n, c , fact = 1;
        scanf("%d", &n);
        for(c = 1 ; c <= n ;c++) 
            fact = fact * c ;
        printf("%d\n" ,fact);
    }
    return 0;
}
            
