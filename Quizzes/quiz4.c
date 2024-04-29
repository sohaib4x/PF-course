/*Question>>
Write a program to find whether a number is prime or not.
• Use a for loop that runs for the least possible number of times without
using the break statement. Do not use relational operators. */
#include <stdio.h>
int main(){
    int num, count = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    for(int i = 2; (i-num/2) && count; i++){
        if(num%i);
        else
        count--;  
    }

    if(count)
        printf("\n\n\t%d is a prime number.\n\n", num);
    else
        printf("\n\n\t%d is not a prime number.\n\n",num);
        return 0;
}
