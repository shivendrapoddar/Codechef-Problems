#include <iostream>

using namespace std;

int main() {
    int hard, tensile, tc;
    float carbon;
    int grade;
    cin>>tc;
    while (tc--) {
        cin>>hard>>carbon>>tensile;
        if (hard > 50 && tensile > 5600 && carbon < 0.7) {
            grade = 10;
        }
        else if (hard > 50 && carbon < 0.7) {
            grade = 9;
        }
        else if (carbon < 0.7 && tensile > 5600) {
            grade = 8;
        }
        else if (hard > 50 && tensile > 5600) {
            grade = 7;
        }
        else if (hard > 50 || carbon < 0.7 || tensile > 5600) {
            grade = 6;
        }
        else {
            grade = 5;
        }
        cout<<grade<<endl;
    }
    return 0;
}
        
