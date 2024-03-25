/* Question.
In main function.
1. Take an integer from the user

2. Receives answer from the function check

3. If answer is “1”, tell that the integer is zero

4. Otherwise, the integer is non-zero
In check function:
1. Take integer from the main

2. Returns “1” if the integer is zero

3. Returns “0” if the integer is non-zeros
  */

#include <stdio.h>
int check(int);

int main() {
    int num;
    printf("\n\t\tEnter any num : ");
    scanf("%d", &num);
    if(check(num))
    printf("\n\t\tThe integer is zero. ");
    else
    printf("\n\t\tThe integer is non zero.");

    return 0;
}

int check(int integer){
    if(integer)
        return 0;
        else
        return 1;     
    
}
