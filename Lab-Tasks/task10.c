/* Question>> Write a program which take number and his power as input and then find
the power of that number. (10^3 = 1000). Don’t use library power function.*/


#include <stdio.h>
int main(){
   int power,base;
   printf("Enter base : ");
   scanf("%d", &base);

   printf("Enter power : ");
   scanf("%d", &power);
   int ans = 1;

   for(int i = 0; i<power; i++){
     ans = ans * base;  // to calculate the power 

   }

   printf("%d to the power %d is %d",base,power,ans); //to print answer
   return 0;
}
