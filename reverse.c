#include<stdio.h>
int main() {
    int tc, num, rev ,rmul , i;
    scanf("%d", &tc);
    for(i = 0; i < tc; i++) {
        scanf("%d", &num);
        rmul = 0;
        while(num > 0) {
            rev = num % 10;
            rmul = rmul * 10 + rev;
            num = num / 10; 
        }
            printf("%d\n",rmul);
    }
    return 0;
}
