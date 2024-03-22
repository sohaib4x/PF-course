/*Question >> Write a program which takes three number as input. Then find the greater
number among them. Don’t use (&& or ||). Solve it with nested if else statement.*/

#include <stdio.h>

int greatest(int, int, int); // function prototype

int main() {
    int num1, num2, num3;

    printf("Enter number 1 : ");
    scanf("%d", &num1);

    printf("Enter number 2 : ");
    scanf("%d", &num2);

    printf("Enter number 3 : ");
    scanf("%d", &num3);

    int res = greatest(num1, num2, num3); // function calling
}

int greatest(int x, int y, int z) {
    if (x > y) {
        if (x > z) {
            printf("Greatest number is %d\n", x);
            return x;
        }
    }

    if (y > x) {
        if (y > z) {
            printf("Greatest number is %d\n", y);
            return y;
        }
    }

    if (z > y) {
        if (z > x) {
            printf("Greatest number is %d\n", z);
            return z;
        }
    }

    if (x == y){
    if(y==z){
     
        printf("All are equal.\n");
        return x; // You can return any of the equal values.
    }
    }

    return 0;
}
