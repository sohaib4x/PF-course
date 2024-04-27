/*Question : 
Write a function that receives marks received by a student in 3 subjects and
returns the average and percentage of these marks. Call this function from
main( ) and print the results in main( ). (Use pointers only)
#include <stdio.h>*/

void cal(int, int, int, float *, float *);

int main() {

    int sub1, sub2, sub3;
    float avg, per;

    printf("Enter marks in English : ");
    scanf("%d", &sub1);

    printf("Enter marks in Calculus : ");
    scanf("%d", &sub2);

    printf("Enter marks in Physics : ");
    scanf("%d", &sub3);

    cal(sub1, sub2, sub3, &avg, &per);
    printf("Average of These marks are %.2f\n", avg);
    printf("Percentage of these marks are %.2f\n", per);

    return 0;
}

void cal(int eng, int calculus, int phy, float *avg, float *per) {
    *avg = (eng + calculus + phy) / 3.0;
    float obtain = eng + calculus + phy;
    int total = 300;
    *per = (obtain / total) * 100;
}
