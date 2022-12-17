/*
------------------------------------------------
| Still working on this file....               |
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
| Follow the ds lab sample before writing.     |
| Be careful when writing code.                |
------------------------------------------------
*/

/*
Question 1. Write a program to find the maximum and minimum values from a given array.
*/

// Algorithm:

// Source code:
#include <stdio.h>
#define SIZE 1000

int main() {
    
    int ch = 0, dg = 0, sp = 0;
    char str[SIZE];
    
    printf("Enter your string: ");
    fgets(str, SIZE, stdin);
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z') ch++;
        else if ((str[i]>='a' && str[i]<='z')) ch++;
        else if (str[i]>='0' && str[i]<='9') dg++;
        else if (str[i] != '\n') sp++;
    }
    
    printf("Characters found: %d\n", ch);
    printf("Digits found: %d\n", dg);
    printf("Special characters found: %d\n", sp);
    
}

/*
Output:
----------------------------------------------------------
Enter your string: hello##1234
Characters found: 5
Digits found: 4
Special characters found: 2
----------------------------------------------------------
*/




