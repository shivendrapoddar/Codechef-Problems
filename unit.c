 #include<stdio.h> 
int main() 
{ 
    float length, converted, measure;    
    char inUnits, outUnits; 
          
        printf("Enter the value of length to be converted: "); 
        scanf("%f", &measure); 
          
        printf("Enter the unit of value entered (I, F, C, or M): "); 
        scanf("%c", &inUnits); 
          
        printf("Enter the unit to convert value to (c, m, f, or i ): "); 
        scanf("%c", &outUnits); 
          
        switch(inUnits){ 
            case 'I': 
                converted = measure * 2.54001; 
                printf("The length you entered in inches is equal to %f centimeters", converted); 
                break; 
     
            case 'M': 
                converted = measure * 3.3; 
                printf("The length you entered in meters is equal to %f feet", converted); 
                break; 
            case 'F': 
                switch(outUnits){ 
                 
                 
                default: 
                    printf("Incorrect unit entered.  Please enter a valid unit."); 
                    break;} 
                break; 
                default: 
                    printf("Incorrect unit entered.  Please enter a valid unit."); 
                    break;} 
                  
          
                    return 0; 
                    }  
