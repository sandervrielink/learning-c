#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int main(void)
{
    int first_try = collatz(7);
    printf("times: %i\n",first_try);
}

int collatz(int n)
{
    // if you only have 1 line after the if statement, you don't
    // have to use curly braces

    // base case:
    if (n == 1)
        return 0;

    // if n is even
    if (n % 2 == 0)
        return 1 + collatz(n/2);
    // if n is odd
    else
        return 1 + collatz(3 * n + 1); 
}
