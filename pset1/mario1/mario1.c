#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int hgt, row, clm, dot, ddot, clm2;
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
            for (ddot = 0; ddot < 2; ddot++)
      {
          printf("  ");
      }
          for (clm2 = 0; clm2 <= row; clm2++)
      {
          printf("#");
      }
      printf("\n");
  }
}