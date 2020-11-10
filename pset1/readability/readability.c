#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    string txt = get_string("Text: ");
    int letters, words, sents;
    letters = words = sents = 0;

    for (int i = 0, n = strlen(txt); i < n; i++)
    {
        if (isalpha(txt[i]))
        {
            letters++;
        }
        if ((i == 0 && txt[i] != ' ') || (txt[i] == ' ' && txt[i + 1] != ' '))
        {
            words++;
        }
        if (txt[i] == '.' || txt[i] == '!' || txt[i] == '?')
        {
            sents++;
        }
    }
    float L = ((float) letters / (float) words) * 100;
    float S = ((float) sents / (float) words) * 100;
    //index = 0.0588 * L - 0.296 * S - 15.8
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
