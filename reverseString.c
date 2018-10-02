/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void reverse(char* str, int length);
char* reverseA(char* str, int length);

int main()
{
    char str[] = "Hello";
    int length = strlen(str);
    reverse(str, length);
    printf("%s\n", str);
    printf("%s\n", reverseA(str, length));
}

void reverse(char* str, int length) {
    for (int i = 0; i < (length) / 2; i++) {
        char a = str[i];
        char b = str[length - 1 - i];
        str[length - 1 - i] = a;
        str[i] = b;
    }
    // return str;
}

char* reverseA(char* str, int length) {
    char* reverse= malloc(length * sizeof(char));
    int counter = length - 1;
    for (int i = 0; i < length; i++) {
        reverse[i] = str[counter];
        counter--;
    }
    return reverse;
}