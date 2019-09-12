#include<stdio.h>
int main() {
    int tc , num , count;
    scanf("%d", &tc);
    while(tc--) {
        scanf("%d", &num);
        count = 0;
        while(num >= 100) {
            count = count + 1;
            num = num - 100;
            }
        while(num >= 50) {
            count = count + 1;
            num = num - 50;
            }
        while(num >= 10) {
            count = count + 1;
            num = num - 10;
            }
        while(num >= 5) {
            count = count + 1;
            num = num - 5;
            }
        while(num >= 2) {
            count = count + 1;
            num = num - 2;
            }
        while(num >= 1) {
            count = count + 1;
            num = num - 1;
            }
        printf("%d \n",count);
    }
    return 0;
} 
