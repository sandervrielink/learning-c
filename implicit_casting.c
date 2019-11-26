// implicit casting
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) 
{
    string name = get_string("name: ");

    for (int i = 0, total = strlen(name); i < total; i++)
    {
        // implicit castint the character to an integer, the computers knows it already
        printf("%c: %i \n", name[i], name[i]);
    }
}
