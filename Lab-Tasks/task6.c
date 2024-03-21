/*
Question : Write a C program which take alphabet as input and then find whether
the alphabet is vowel or not. For vowel the character must be a, e, I,
o ,u.*/

#include <stdio.h>

void isVowel(char); // function prototype

int main() {
    char c;
    printf("Enter an alphabet: ");
    scanf(" %c", &c); // Added space before %c to consume any leading whitespaces

    isVowel(c); // function calling

    return 0;
}

void isVowel(char ch) {
     int low_case = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
     int upp_case = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

   if (low_case || upp_case) {
   
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }
}
