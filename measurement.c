#include <iostream>

int main() {
    cout<<"Choose the source unit for conversion. 1: Kilometer\n2: Miles\n:3: Feet";
    int inunit;
    cin>>inunit;
    cout<<"Choose the target unit for conversion. 1: Kilometer\n2: Miles\n:3: Feet";
    int outunit;
    cin>>outunit;
    float measurement; 
    cout<<"Enter the value to be converted: ";
    cin>>measurement;
    int convert;
    switch(inUnits){ 
         case 1: 
             convert = measure * 0.621371;
             printf("The length you entered in kilometre is equal to %f miles", convert); 
             break; 
         case 2: 
                convert = measure * 5280; 
                printf("The length you entered in miles is equal to %f feet", convert); 
                break; 
         case 3: 
                switch(outUnits){ 
                     default: 
                          printf("Incorrect unit entered.  Please enter a valid unit."); 
                          break;
                          } 
                break; 
                default: 
                    printf("Incorrect unit entered.  Please enter a valid unit."); 
                    break
            } 
    return 0; 
}            
            
        
            
