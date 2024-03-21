/*
Question : Write a C program to find which find that the triangle is valid or not.
Take three sides as input from the user. For valid triangle any two
sides of triangle must be greater than other side.*/

#include <stdio.h>
int validTriangle(int,int,int); // Function prototype.
int main(){
    int side1, side2, side3;

    printf("Enter side 1 : ");
    scanf("%d", &side1);

      printf("Enter side 2 : ");
    scanf("%d", &side2);

      printf("Enter side 3 : ");
    scanf("%d", &side3);

    int z = validTriangle(side1,side2,side3);
}

int validTriangle(int side1, int side2, int side3){ // Function definition.
 
    // Condition to check valid triangle.
    if((side1+side2 > side3) && (side2+side3 > side1) && (side1+side3 > side1)){
        printf("The sides %d %d and %d are sides of triangle. \n", side1, side2, side3);
    }

    else{
        printf("The sides %d %d and %d are not sides of triangle", side1, side2, side3);
    }

    return 0;
}
