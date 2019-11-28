// Luhn's Algorithm

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n = 0;
    string card = "";
    int cardnum = 0;
    do
    {
        n = get_long("number: ");
    }
    while (n < 1);
    
    long check_num = n;
    long check_num1 = n;
    int counter = 0;
    int sum1 = 0;
    while (check_num)
    {
        check_num = check_num / 10;
        if (((check_num % 10) * 2) > 9) 
        {
            sum1 = sum1 + 1 + (((check_num % 10) * 2) - 10);
        } 
        else
        {
          sum1 = sum1 + ((check_num % 10) * 2); 
        }
        check_num /= 10;
    }

    bool first = true;
    while (check_num1)
    {    
        if(first) 
        {
           sum1 = sum1 + (check_num1 % 10); 
           check_num1 /= 10;
           first = false;
        } 
        else 
        {
           check_num1 /= 10;
           sum1 = sum1 + (check_num1 % 10); 
           check_num1 /= 10;
        }   
    }
    while(n)
    {
        counter ++;
        if (n == 51 || n == 52 || n == 53 || n == 54 || n == 55) 
        {
            cardnum = 2;
        } 
        if (n == 40) 
        {
            cardnum = 3;
        } 
        if (n == 34 || n == 37) 
        {
            cardnum = 1;
        } 
        n /= 10;
    }
    if (counter == 15 && cardnum == 1 && (sum1 % 10 == 0)) 
    {
        card = "AMEX\n";
    } 
    else if (counter == 16 && cardnum == 2 && (sum1 % 10 == 0))
    {
        card = "MASTERCARD\n";
    } 
    else if ((counter == 13 || counter == 16) && cardnum == 3 && sum1 % 10 ==0)
    {
        card = "VISA\n";
    } 
    else 
    {
       card = "INVALID\n"; 
    }
    printf("%s", card);
}