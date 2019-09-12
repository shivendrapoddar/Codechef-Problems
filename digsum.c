#include<stdio.h>
int main() {
    int num , tc ;
    scanf("%d", &tc);
    for(int i = 0 ; i < tc ; i++) {
        scanf("%d", &num);
        int sum = 0;
        while(num > 0) {
            sum = sum + (num % 10);
            num = num / 10;
        }
        printf("%d \n", sum);
    }
    return 0;
}
             
        
        
        
