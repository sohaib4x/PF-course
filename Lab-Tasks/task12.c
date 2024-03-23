/*Write a C program that displays the n terms of square natural numbers and
their sum.
The series is as below:
1 4 9 16 ... n Terms.*/


#include <stdio.h>

int main()
{
  int n; //  number of terms to display
  int term; // The current term
  int sum = 0; // The sum of the terms

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // Loop 
  printf("The square natural upto %d terms are: ", n);
  for (int i = 1; i <= n; i++)
  {
    term = i * i; // The square of i
    printf("%d ", term);
    sum += term; // Add the term to the sum
  }

  // Print the result.
  printf("\nThe Sum of Square Natural Number upto %d terms = %d\n", n, sum);

  return 0;
}
