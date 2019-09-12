#include <iostream>

using namespace std;

int main() {
    int tc, num, temp, count;
    cin>>tc;
    while(tc--) {
        cin>>num;
        count = 0;
        while(num >= 10) {
            temp = num % 10;
            if(temp == 4) {
                count++;
            }
            num = num / 10;
        }
        if(num == 4) {
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
            
            

