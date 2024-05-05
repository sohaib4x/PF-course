/*Suppose there is a structure called employee that holds information like employee code,
name and date of joining. Write a program to create an array of structures and enter
some data into it. Then ask the user to enter current date. Display the names of those
employees whose tenure is greater than equal to 3 years.*/
#include <stdio.h>

struct Employee {
int code;
char name[100];
int yearOfJoining;
};

int main() {
int numEmployees;
printf("Enter the number of employees: ");

scanf("%d", &numEmployees);
struct Employee employees[numEmployees];

// Input employee data
for (int i = 1; i <= numEmployees; i++) {
printf("\n\nEnter details for Employee %d:\n", i );
printf("Code: ");
scanf("%d", &employees[i].code);
printf("Name: ");
scanf("%s", employees[i].name);
printf("Year of Joining: ");
scanf("%d", &employees[i].yearOfJoining);
}

// Input current date
int currentYear;
printf("\nEnter the current year: ");
scanf("%d", &currentYear);

// Display employees with tenure >= 3 years

printf("\nEmployees with tenure >= 3 years:\n");
for (int i = 1; i <= numEmployees; i++) {
int tenure = currentYear - employees[i].yearOfJoining;
if (tenure >= 3) {
printf("Name: %s\n", employees[i].name);
}
}

return 0;
}
