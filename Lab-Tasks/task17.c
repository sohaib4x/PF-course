/* Question>>Write a program which takes number as input and print stars in that
format. (Use only while loop, don’t use nested for or while loop)*/

#include <stdio.h>

int main() {

    int i = 1, j = 1,num;
    printf("Enter number of rows : ");
    scanf("%d",&num);

    while (i <= num) {
        if (i == 1 || i == num || j == 1 || j == num) {
            printf("* ");
        } else {
            printf("  ");
        }
        if (j == num) {
            printf("\n");
            i++;
            j = 1;
        } else {
            j++;
        }
    
    }
    return 0;
}
