/*Write a program which take n number of integers and then prints the total
number of odd integers, the sum of odd integers, the total number of even
integers, the sum of even integers and the number of zeros.*/

#include <stdio.h>

int main() {
    int num;  // variable to take number of integers

    printf("Enter the number of integers: ");
    scanf("%d", &num);

    //variables
    int number, no_of_odd = 0, no_of_even = 0, no_of_zeroes = 0, sum_of_odd= 0, sum_of_even = 0;
    

    printf("Enter the integers:\n");
    for (int i = 0; i < num; i++) {
        scanf("%d", &number);
        
        // Condition to check even 
      // here i Used all if statement because zero is both even and odd
        if (number % 2 == 0 ) {
            no_of_even++;
            sum_of_even += number;  // to store number of even
        }
         if (number % 2 != 0) {
            no_of_odd++;
            sum_of_odd += number;  // to store number of odd
         }
        if(number==0){
            no_of_zeroes++;
        }
        
    }

    printf("\nTotal number of odd integers: %d\n", no_of_odd);
    printf("Sum of odd integers: %d\n", sum_of_odd);
    printf("Total number of even integers: %d\n", no_of_even);
    printf("Sum of even integers: %d\n", sum_of_even);
    printf("Number of zeros: %d\n", no_of_zeroes);

    return 0;
}
