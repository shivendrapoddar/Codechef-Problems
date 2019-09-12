#include <iostream>

using namespace std;

int main() {
    int a, b, min, max, large, small;
    int tc;
    cin>>tc;
    while (tc--) {
        cin>>a>>b;
        if (a > b) {
            large = a;
            small = b;
        }
        else {
            large = b;
            small = a;
        }
        max = large + small;
        min = large;
        cout<<min << " "<<max<<endl;
    }
    return 0;
}
        
            
                     
