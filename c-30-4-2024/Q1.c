// Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.
// For example,
// Output: 
// a, e, i, m, q, u, y


#include <stdio.h>

int main()
{
    char ch = 'a';
    char end ='z';

    printf("program is print all alphabets form ato z by skipping 3 alphabets: \n");
    do
    {
        printf("%c\n", ch);
        ch++;
        ch++;
        ch++;
        ch++;
    }   while(ch<=end);

    return 0;
}