#include<stdio.h>
int main() {
    long int n , i , p , half , cakewalk = 0 , tuff = 0 ;
    scanf("%ld %ld ", &n ,&p);
    long int a[n];
    for(i = 1; i <= n; i++) 
            scanf("%ld", &a[i]);
        half = p / 2;
        int m = p / 10;
        for(i = 1; i <= n; i++) { 
            if(a[i] >= half) {
                cakewalk++;
            }
            else if (a[i] <= m)
                tuff++;
        }
        if(cakewalk == 1 && tuff == 2)
            printf("yes\n");
        else
            printf("no\n");
        return 0;
}
            
        
        
        
    
