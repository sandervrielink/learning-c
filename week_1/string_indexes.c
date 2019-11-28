// writing better code
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) 
{
    string input1 = get_string("input1: ");
    printf("Output: \n");
    // declaring s, strlen, after i: else you are constantly calling a function in de for loop
    for (int i = 0, s = strlen(input1); i < s; i++)
    {
        // print the character, using %c
        printf("%c\n", input1[i]);
    }
}