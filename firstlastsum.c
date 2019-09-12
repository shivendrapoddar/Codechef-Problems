#include<stdio.h>
int main() {
    int num,firstdigit,lastdigit,sum,tc;
    scanf("%d", &tc);
    scanf("%d", &num);
    while(tc--) {
        firstdigit = num % 10;
        while(num > 0) {
            lastdigit = num % 10;
            num = num / 10;
          }
          sum = firstdigit + lastdigit;
    
    }
    return 0;
}
        




    
