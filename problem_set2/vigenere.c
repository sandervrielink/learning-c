// CS50 Caesar problem set 2
#include <cs50.h>
#include <stdio.h>
#include <string.h>

//int shift(char c);

int main(int argc, string argv[])
{
    string first_string = argv[1];
    int counter_word = strlen(first_string);
    bool is_word;
    if (argc == 2) 
    {
        for (int i = 0, s = strlen(first_string); i < s; i++)
        {
            if ( (first_string[i] >= 'A' && first_string[i] <= 'Z') || (first_string[i] >= 'a' && first_string[i] <= 'z') )
            {
                is_word = true;
            }
            else {
                is_word = false;
                break;
            }
        }
        if (is_word) {
            int count[counter_word];
            //int key = shift(argv[1][0]);
            //printf("%i\n", key);
            for (int i = 0, s = strlen(first_string); i < s; i++) 
            {
                if (first_string[i] >= 'A' && first_string[i] <= 'Z')
                {
                    count[i] = first_string[i] - 65;
                    
                }
                else 
                {
                    count[i] = first_string[i] - 97;
                }
            }
            return 0;
        } 
        else 
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
}

// int shift(char c) 
// {
    
// }
