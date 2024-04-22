/*pattern using recursion*/
#include <stdio.h>
void printPattern(int,int);

int main() {
int rows;

printf("Enter the number of rows for the pattern: ");
scanf("%d", &rows);

printPattern(rows, rows);

return 0;
}

void printPattern(int rows, int cols) {

if (rows == 0)
return;

for (int i = 0; i < cols; i++) {
printf("*");
}
printf("\n");

printPattern(rows - 1, cols);
}
