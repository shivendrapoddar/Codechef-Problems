#include<stdio.h>
int main() {
    int tc , a , b , c ;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a + b + c == 180 && a != 0 && b != 0 && c != 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
    
