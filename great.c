#include<stdio.h>
int main() {
    int tc , i , num1 , num2 , num3 ;
    scanf("%d", &tc);
    for(i = 0 ; i < tc ; i++) {
        scanf("%d %d %d", &num1 , &num2 , &num3);
    if((num1 > num3 && num1 < num2) || (num1 > num2 && num1 < num3)) {
        printf("%d\n", num1);            
        }
    else if((num2 > num3 && num2 < num1) || (num2 < num3 && num2 > num1)) {
        printf("%d\n", num2);
        }
    else {
        printf("%d\n", num3);
         }
    }
    return 0;
}
    
