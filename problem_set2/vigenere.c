// CS50 Caesar problem set 2
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift1(char, char, int);

int main(int argc, string argv[])
{
    string keyword = argv[1];
    int total_characters_keyword = strlen(keyword);
    bool is_word;
    
    //we only want one input after the filename in the commandline
    if (argc == 2) 
    {
        for (int i = 0, s = strlen(keyword); i < s; i++)
        {
            if ((keyword[i] >= 'A' && keyword[i] <= 'Z') || (keyword[i] >= 'a' && keyword[i] <= 'z'))
            {
                is_word = true;
            }
            else 
            {
                is_word = false;
                break;
            }
        }
        
        // if the keyword is a word with only alphabetic letters
        if (is_word) 
        {
            // this is the input from the user
            string plaintext = get_string("plaintext: ");
            printf("ciphertext: ");

            int keyword_counter = 0;
            int total_char_keyword = strlen(keyword);

            for (int i = 0, s = strlen(plaintext); i < s; i++) 
            {
                // calling the function shift and storing the return value in keyword_counter
                // also pulling in the keyword_counter
                keyword_counter = shift1(plaintext[i], keyword[keyword_counter], keyword_counter);
                if (keyword_counter >= total_characters_keyword) 
                {
                    keyword_counter = 0;
                }
            }
            printf("\n");
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

// this function will make the correct letter and puts it on the screen
int shift1(char char_plaintext, char keyword_char, int keyword_counter) 
{
    // make a string with the whole alfebet, so we can iterate trough it for knowing
    // at which index the keyword is. 
    string alfabet = "abcdefghijklmnopqrstuvwxyz";
    int new_keyword_index = 0;
    int new_char = 0;
    for (int i = 0; i < strlen(alfabet); i++)
    {
        if (alfabet[i] == tolower(keyword_char))
        {
            new_keyword_index = i;
            break;
        }
    }
    int total_char = new_keyword_index + char_plaintext;
    if (isupper(char_plaintext))
    {
        // char new_character = char_plaintext - 65;
        if (total_char > 90)
        {
            new_char = (total_char % 91) + 65;
        }
        else 
        {
            new_char = char_plaintext + new_keyword_index;
        }
        
        printf("%c", new_char);
        keyword_counter++;
    }
    // is the letter lowercase?
    else if (islower(char_plaintext))
    {
        if (total_char > 122)
        {
            new_char =  (total_char % 123) + 97;
        }
        else 
        {
            new_char = char_plaintext + new_keyword_index;
        }
        printf("%c", new_char);
        keyword_counter++;
    }
    // else it isn't a letter but another character
    else 
    {
        printf("%c", char_plaintext);
    }
    // return the keyword_counter so we know from where to start next time
    return keyword_counter;
}
