#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int hgt, row, clm, dot;
    do
    {
        hgt = get_int("Positive Integer: ");
    }
    while (hgt < 1 || hgt > 8);
   for (row = 0; row < hgt; row++)
  {
       for (dot = 0; dot < hgt - row - 1; dot++)
      {
          printf(" ");
      }
      for (clm = 0; clm <= row; clm++)
      {
          printf("#");
      }
      printf("\n");
  }
}