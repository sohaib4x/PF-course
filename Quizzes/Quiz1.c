/*
 This Quiz was to make a simple Calculator and to add,subtract,divide and multiply there should be user defined function
there should be design function too.
*/


#include <stdio.h>
#include <math.h>

int add(int, int);           // prototype to add function
int subtract(int, int);      // prototype for subtract function 
float divide(int, int);      // prototype for division function
int multiply(int, int);      // prototype for multiplication function
int power(int, int);         // prototype for power function
float logarithm(int, int);   // prototype for lograthamic function
void pattern();              // prototype for pattern.
void pattern2();

int main() {
    pattern();
    float num1, num2;  // declaring variables in float because we have both int and float values
    int add_ans, sub_ans, mul_ans, pow_ans;
    float div_ans, log_ans;

    printf("\nEnter First Number  : ");
    scanf("%f", &num1);

    printf("Enter Second Number : ");
    scanf("%f", &num2);

    //Function calling
    add_ans = add(num1, num2);
    sub_ans = subtract(num1, num2);
    div_ans = divide(num1, num2);
    mul_ans = multiply(num1, num2);
    pow_ans = power(num1, num2);
    log_ans = logarithm(num1, num2); 

    printf("Addition of %.1f and %.1f = %d\n", num1, num2, add_ans);
    printf("Subtraction of %.1f and %.1f = %d\n",num1, num2, sub_ans);
    printf("Division of %.1f and %.1f = %.3f\n",num1, num2, div_ans);
    printf("Multiplication %.1f and %.1f = %d\n",num1, num2, mul_ans);
    printf("%.1f to the power %.1f = %d\n",num1, num2, pow_ans);
    printf("Logarithm of %.1f and %.1f = %.3f\n",num1, num2, log_ans); 

    pattern2();

    return 0;
}

// Function definitions.

int add(int a, int b) {
    // return values
    return (a + b);
}

int subtract(int c, int d) {
    return (c - d);
}

float divide(int e, int f) {
    return (float)e / f; 
}

int multiply(int g, int h) {
    return (g * h);
}

int power(int i, int j) {
    return pow(i, j);
}

float logarithm(int k, int l) {
    return log(k) / log(l); 
}

void pattern(){

    printf("\n\n<<<<<<<<<<<<<<<<<<<<<<<<**************************>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
    printf("\t\t\tWelcome to Our Calculator\n");

}

void pattern2(){


  printf("\n\t\t\tCalculation Ended:\n\n");
  printf("==============================================================================\n\n");

}
