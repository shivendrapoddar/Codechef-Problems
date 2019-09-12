#include <iostream>

using namespace std;

int main() {
    int tc, quantity, price; 
    float expense;
    cin>>tc;
    while (tc--) {
        cin>>quantity>>price;
        expense = quantity * price;
        if (quantity > 1000) {
            expense = expense - expense / 10;
        }
        cout<<expense<<endl;
    }
    return 0;
}


