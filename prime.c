#include<stdio.h>
int main() {
    int low , high , i ;
    scanf("%d %d", &low , &high);
    while(low < high) {
        int flag = 0;
        for(i = 2; i <= low / 2; ++i) {
                if(low % i == 0) {
                    flag = 1;
                    break;
                }
        }
        if(flag  == 0) 
            printf("%d ", low);
        ++low;
        
    }
    return 0;
}
                    
    
