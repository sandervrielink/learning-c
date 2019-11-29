// Comapre 2 strings
#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Declaring the function, otherwise c doesn't know the function exists
// char * --> stores the address of first byte in the memory location --> (pointer)
// This is only by strings (char *)
// a memory location ends with \0
bool compare(char *a, char *b);

int main(void)
{
    char *input1 = get_string("First string: ");
    // same as: if (input == NULL)
    if (!input1)
    {
        return 1;
    }
    char *input2 = get_string("Second string: ");
    if (!input2)
    {
        return 1;
    }

    if (compare(input1, input2))
    {
        printf("same\n");
    }
    else
    {
        printf("differemt\n");
    }
    
}

bool compare(char *a, char *b)
{
    if (strlen(a) != strlen(b))
    {
        return false;
    }
    for (int i = 1, s = strlen(a); i < s; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
