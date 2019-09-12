#include<stdio.h>
int main() {
    int tc , root , num , i ;
    scanf("%d", &tc);
    while(tc--) {
        scanf("%d", &num);
        num = sqrt(num);
        printf("%d \n", num);
    }
    return 0;
}
