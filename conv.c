#include<stdio.h> 
int main() 
{ 
    float length, converted, measure; 
    char inunits, outunits; 
         
        printf("Enter length to be converted: "); 
        scanf("%f \n", &measure); 
         
        printf("Enter the unit of value (I, F, M): "); 
        scanf("%c \n", &inunits); 
         
        printf("Enter the unit to convert value to (c, m,  k): "); 
        scanf("%c \n", &outunits); 
         
        switch(inunits){ 
            case 'I': 
                converted = measure * 2.54001; 
                printf("The length you entered in inches is equal to %f centimeters", converted); 
                break; 
            case 'M': 
                converted = measure * 1.609; 
                printf("The length you entered in miles is equal to %f kilometers", converted); 
                break; 
            case 'F': 
                switch(outunits){ 
                case 'c': 
                    converted = measure * 30.4801; 
                    printf("The length you entered in feet is equal to %f centimeters", converted); 
                    break; 
                case 'm': 
                    converted = measure * 0.304801; 
                    printf("The length you entered in feet is equal to %fmeters", converted); 
                    break; 
                default: 
                    printf("Incorrect unit entered.  Please enter a valid unit."); 
                    break;} 
                break; 
                default: 
                    printf("Incorrect unit entered.  Please enter a valid unit."); 
                    break;} 
                 
         
                    return 0; 
}  
