#include <iostream>

using namespace std;

int main() {
    cout<<"choose the source unit for conversion.\n1: kilometer\n2: Miles\n3: feet\n";
    int inunit;
    cin>>inunit;
    cout<<"choose the target unit for conversion.\n1: Kilometer\n2: Miles\n3: feet\n";
    int outunit;
    cin>>outunit;
    cout<<"Enter value to be resulted: ";
    float value;
    cin>>value;
    double result;
    switch(inunit) {
        case 1:
            result = value * 0.621371;
            cout<<"Enter to convert from kilometer to mile\n"<<result;
            break;
        case 2:
            result = value * 5280;
            cout<<"Enter to convert from mile to feet\n"<<result;
            break;
        case 3:
            switch(outunit) {
                case 1:
                    result = value * 3280.84; 
                    cout<<"Enter to convert from kilometer to\n"<<result;
                    break;
                case 2:
                    result = value * 1.6093;
                    cout<<"Enter to convert from mile to kilo\n"<<result;
                    break;
                case 3:
                    result = value * 0.0001893;
                    cout<<"Enter to convert from feet to mile\n"<<result;
                    break;
                default:
                    cout<<"Invalid choice";
                    break;
                }
       default:
            cout<<"Invalid choice";
            break;
    }
    return 0;
}
        
                
