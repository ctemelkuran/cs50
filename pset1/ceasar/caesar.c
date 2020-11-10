#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

bool validkey(string s);

int main(int argc, string argv[])
{
    if (argc != 2 || !validkey(argv[1])) //Checks if the command line contains 2 arguments
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    int key = atoi(argv[1]);

    string plain = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0, textlen = strlen(plain); i < textlen; i++ )
    {
        char c = plain[i];
        if (isalpha(c))
        {
            char n = 'A';
            if (islower(c))
              n = 'a';
            printf("%c", (c - n + key) % 26 + n);
        }
        else
            printf("%c", c);
    }
    printf("\n");
}

bool validkey(string s)

{
    for (int i = 0, len = strlen(s); i < len; i++)
        if(!isdigit(s[i]))
            return false;
    return true;

}

