#include <iostream>

using namespace std;

int main() {
    int tc, num, rnum, rev = 0;
    cin>>tc;
    while (tc--) {
        cin>>num;
        rnum = num;
        while(rnum != 0 ) {
            rnum = rev * 10 + (rnum % 10);
            rnum = rnum / 10;
        }
        if (rnum == num) {
            cout<<"wins"<<endl;
        }
        else {
            cout<<"losses"<<endl;
        }
    }
    return 0;
}
    

    
