#include <iostream>

using namespace std;

int main() {
        int even = 0, odd = 0, num;
        cin>>num;
        int arr[num];
        for (int i = 0; i < num; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < num; i++) {
            if (arr[i] % 2 == 0) {
                even++; 
            }
            else {
                odd++;
            }
        }
        if (even > odd) {
            cout<<"READY FOR BATTLE";
        }
        else {
            cout<<"NOT READY";   
        }
        return 0;
}
