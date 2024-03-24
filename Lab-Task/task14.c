/*
Question>>Write a program which asks the user to enter a number then a table of all
numbers up to 1 will print. (e. g: if user enters 4 then table of 4, 3, 2, and 1
will print). Note: (Don’t use nested while and for loop);*/

#include <stdio.h>
void printTable(int num);

int main() {
int number;

printf("Enter a number: ");
scanf("%d", &number);

// Call the function to print the table for all numbers up to 1
while (number >= 1) {
printf("Table of %d:\n", number);
printTable(number);
printf("\n"); // Add a newline between tables
number--;
}

return 0;
}

void printTable(int num) { // function for tables
int i = 1;
while (i <= 10) {
printf("%d x %d = %d\n", num, i, num * i);
i++;
}
}
