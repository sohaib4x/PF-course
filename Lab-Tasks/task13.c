/* 
Question>> Write a c program to calculate overtime pay of 10 employees. For permanent
employees overtime is paid at the rate of Rs. 150.00 $ per hour while for
employees on contract overtime is paid at the rate of Rs. 100 $ per hour for
every hour worked above 40 hours. Assume that employees do not work
for fractional part of an hour. Use “p” for permanent employees and “c” for
employees on contract. Calculate also total number of permanent
employees and employees on contract.


*/



#include <stdio.h>

int p_employees();
int c_employees();

int main() {
int num_permanent = 0, num_contract = 0;
char employee_type;
int employee_num = 0;

while (employee_num < 10) {
printf("Enter P for permanent employee, or C for contract employee: for employee no %d: ",
employee_num + 1);
scanf(" %c", &employee_type);

if (employee_type == 'P' || employee_type == 'p') {
num_permanent++;
p_employees();
} else if (employee_type == 'C' || employee_type == 'c') {
num_contract++;
c_employees();
} else {
printf("Invalid employee type. Please enter P or C.\n");

continue;
}

employee_num++;
}

printf("\nNumber of permanent employees: %d\n", num_permanent);
printf("Number of contract employees: %d\n", num_contract);

return 0;
}

int p_employees() {
int total = 40;
int payment = 0, overtime = 0;
int hours;

printf("Enter for how many hours the permanent employee has worked: ");
scanf("%d", &hours);

if (hours > total) {
payment = hours - total;
overtime = payment * 150; // $150 per hour for permanent employees
printf("Overtime salary for this permanent employee: %d\n", overtime);
}

return overtime;
}

int c_employees() {
int total = 40;
int payment = 0, overtime = 0;
int hours;

printf("Enter for how many hours the contract employee has worked: ");

scanf("%d", &hours);

if (hours > total) {
payment = hours - total;
overtime = payment * 100; // $100 per hour for contract employees
printf("Overtime salary for this contract employee: %d\n", overtime);
}

return overtime;
}
