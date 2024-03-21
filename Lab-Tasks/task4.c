/*  
Question : Write a C program to read any day number in integer and display the
day name in word format.*/


#include <stdio.h>
int display(int); // Function prototype
int main(){

    int num;
    printf("Enter your Number between 1 and 7 (inclusive) : ");
    scanf("%d", &num);
    int z = display(num); // Function Calling


}

//function to display the Days
int display(int a){ // Function declaration.
    
//Conditions to check the number.
    if(a == 1){
        printf("The Day is Monday\n");
    }
    else if(a == 2){
        printf("The Day is Tuesday\n");
    }
    else if(a == 3){
        printf("The Day is Wednesday\n");
    }
    else if(a == 4){
        printf("The Day is Thursday\n");
    }
    else if(a == 5){
        printf("The Day is Friday\n");
    }
    else if(a == 6){
        printf("The Day is Saturday\n");
    }
    else if(a == 7){
        printf("The Day is Sunday\n");
    }
    else{
        printf("Invalid input.");
    }
}
