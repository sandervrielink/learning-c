// working with functions and returning a boolean expression
#include <stdio.h>
#include <stdbool.h> 

bool valid_triangle(float x, float y, float z);

int main(void)
{
    bool is_triangle = valid_triangle(4.3, 5.3, 6.2);
}

bool valid_triangle(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z<= 0)
    {
        return false;
    }

    if ((x + y <= z) || (x + z <= y) || (x + z <= x))
    {
        return false;
    }

    return true;
}