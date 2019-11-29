#include <stdio.h>

// arrays are passed by reference in a function call, not a copy of it
// so when you pass an array by invoking (calling) a function, there will be
// no actual data in the parameter, except a location of the first memory address
int main(void)
{
    int foo[5] = { 1, 2, 3, 4, 5};
    int bar[5];

    for (int j = 0; j < 5; j++)
    {
        bar[j] = foo[j];
    }
}