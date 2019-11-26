// CS50 Caesar problem set 2
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int k_int = atoi(argv[1]);
    if (argc == 2 && k_int != 0) 
    {
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        // Loop through characters of input plaintet
        for (int i = 0, s = strlen(plaintext); i < s; i++) 
        {
            int letter = 0;
            int letter1 = plaintext[i];
            // is it a capital letter?
            if (letter1 >= 65 && letter1 <= 90)
            {
                letter = letter1 + k_int;
                if (letter > 90) 
                {
                    letter = letter - 26;
                }
                printf("%c", letter);         
            }
            // is it a lower letter?
            else if (letter1 >= 97)
            {
                letter = letter1 + k_int;
                if (letter >= 123) 
                {
                    letter = letter - 26;
                }
                printf("%c", letter);         
            }
            // other characters
            else
            {
                printf("%c", letter1);
            }
        }
        printf("\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}