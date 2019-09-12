#include <iostream>

using namespace std;

int main() {
    int tc, num1, num2;
    cin>>tc;
    while(tc--) {
        cin>>num1>>num2;
        if(num1 > num2) {
            cout<<'>'<<endl;
        }
        else if(num1 < num2 ) {
            cout<<'<'<<endl;
        }
        else {
            cout<<'='<<endl;
        } 
    }
    return 0;
} 
    
 

