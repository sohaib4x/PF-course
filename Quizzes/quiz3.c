/*Write a program that takes an integer from the user and finds if it is
a palindrome, which mean the number is equal to its reverse

• You should ONLY use a for loop

• You SHOULD NOT use relational/logical operator in your program

• Your program MUST NOT exceed 15 lines starting from int main to return 0*/

#include <stdio.h>

int main() {
int num = 0,num2,remainder = 0,reverse = 0;

printf("Enter any interger : ");
scanf("%d",&num2);

for(num = num2; num; num = num/10){
    remainder = num%10;
    reverse = reverse * 10 + remainder;
}
if(num2-reverse)
printf("\nThe number is not a palindrome.\n");

else
printf("\nThe number is a Palindrome.\n");
     
}
