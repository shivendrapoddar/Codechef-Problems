#include <iostream>

using namespace std;

int main() {
    cout<<"Choose the source unit for conversion. 1: Kilometer\n2: Miles\n:3: Feet\n";
    int inunit;
    cin>>inunit;
    cout<<"Choose the target unit for conversion. 1: Kilometer\n2: Miles\n:3: Feet\n";
    int outunit;
    cin>>outunit;
    float measurement; 
    cout<<"Enter the value to be resulted: ";
    cin>>measurement;
    double result;
    switch(inunit) { 
         case 1: 
             result = measurement * 0.621371;
             cout<<"The length you entered in kilometre is equal to "<< result << " miles"; 
             break; 
         case 2: 
                result = measurement * 5280; 
                cout<<"The length you entered in miles is equal to "<<result << " feet"; 
                break; 
        default: 
                cout<<"Incorrect unit entered.  Please enter a valid unit."; 
                break;
            }
    return 0; 
}            
