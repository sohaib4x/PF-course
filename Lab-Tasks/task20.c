/* Question of Array
In a gymnastics or diving competition, each contestant’s score is calculated by
dropping the lowest and highest scores and then adding the remaining scores. Write
a program that allows the user to enter eight judges’ scores and then outputs the
points received by the contestant. Format your output with two decimal places. A
judge awards points between 1 and 10, with 1 being the lowest and 10 being the
highest. For example, if the scores are 9.2, 9.3, 9.0, 9.9, 9.5, 9.5, 9.6, and 9.8, the
contestant receives a total of 56.90 points */


#include <stdio.h>

int main() {
float scores[8];
float total = 0.0;

printf("Enter the scores of the 8 judges:\n");
for (int i = 0; i < 8; i++) {
scanf("%f", &scores[i]);
}

float lowest = scores[0];
float highest = scores[0];
for (int i = 1; i < 8; i++) {
if (scores[i] < lowest) {
lowest = scores[i];
}
if (scores[i] > highest) {
highest = scores[i];
}
}

for (int i = 0; i < 8; i++) {
if (scores[i] != lowest && scores[i] != highest) {
total += scores[i];

}
}

printf("Total points received by the contestant: %.2f\n", total);

return 0;
}
