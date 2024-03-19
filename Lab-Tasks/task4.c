/*  Here is the Question
Write a program that takes an integer as input and outputs whether it is even or odd.
*/


#include <stdio.h>
int main(){

int num;

printf("Enter any number to check whether it's Even or Odd : ");
scanf("%d",&num);

//condtion to check
if(num%2==0){
     printf("The number %d is Even.",num);
}
else{
     printf("The number %d is Odd.",num);
}

}