// explicit casting
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) 
{
    string name = get_string("name: ");

    for (int i = 0, total = strlen(name); i < total; i++)
    {
        // explicit cast the character to an integer
        int name_int = (int) name[i];
        printf("%c: %i \n", name[1], name_int);
    }
}