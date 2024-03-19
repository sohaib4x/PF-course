/*   Here is the Question: 
Write a c program that takes the temperature as input and outputs whether it's hot,
moderate, or cold based on the following criteria:
*/

#include <stdio.h>
int main(){
    int temp; // variable for temperature
    
    printf("Enter the temperature in Celcius : "); //Promt user to enter the temperature.
    scanf("%d", &temp); //Reads input.


   //check if the temperature greater than 30
    if(temp>30){
        printf("Weather is hot.\n");
    }

    // Check if the temperature is between 20 and 30 inclusive.
    else if(temp>=20 && temp<=30){
        printf("Weather is moderate.\n");
    }
    
    // if the temperature is less than 20 it is considered cold.
    else {
        printf("Weather is Cold.\n");
    }
    
    return 0;
}
