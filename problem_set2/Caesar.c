// CS50 Caesar problem set 2
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int k_int = atoi(argv[1]);
    if (argc == 2 && k_int != 0) 
    {
        string k_string = argv[1];

        printf("\n %i \n", k_int);
        string plaintext = get_string("plaintext: \n");
        printf("ciphertext: ");
        string cyphertext = "";
        for (int i = 0, s = strlen(plaintext); i < s; i++) {
            int letter1 = plaintext[i];
            if (letter1 >= 65 && letter1 <= 115)
            {
                int letter = letter1 + k_int;
                printf("%c", letter);         
            }
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
