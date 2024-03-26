/*
Question>> Write a C program which takes number as input and print stars in that
format. (Use only while loop, don’t use nested for or while loop)

*/


#include <stdio.h>
int main() 
{                                                                                                     
    int num;

    printf("Enter the value for stars: "); // taking input
    scanf("%d", &num);

   int i = 1; //initializing i = 1

   while (num > 0) { // using while loop 
        if (num>=i){ // condition 
        printf("*"); 
        i++;
        }
        else {
              // condition for next line
            printf ("\n");
            num--;
            i = 1;
        }
        
    }
    return 0;
}
