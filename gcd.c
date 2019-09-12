#include<stdio.h>
int main() {
    int num1 , num2 , gcd , lcm , i;
    printf("%d", &gcd);
    for(i = 0; i <= num1 && i <= num2; ++i) {
        if(num1 % i == 0 && num2 %i == 0) 
            gcd = i;
    }
        printf("%d", gcd);
    lcm = num1 * num2 / gcd;
    printf("%d \n", lcm);
    return 0;
}
    
        
