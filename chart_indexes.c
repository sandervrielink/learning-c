// c program with indexes creating a simple chart
#include <stdio.h>
#include <cs50.h>

const int COUNT = 4;

void chart(int score);

int main(void) 
{
    int score[COUNT];
    for(int i = 0; i < COUNT; i++)
    {
        score[i] = get_int("Score %i:", i + 1);
    }
    for(int j = 0; j < COUNT; j++)
    {
        printf("Score %i: ", j + 1);
        chart(score[j]);
        printf("\n");
    }
}

void chart(int score)
{
    for(int i=0; i < score; i++)
    {
        printf("#");
    }
}
