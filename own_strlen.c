// writing own strlen function
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    string name = get_string("name: ");
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    printf("The length of your name: %i\n", i);
}