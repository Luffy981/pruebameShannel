#include <stdio.h>

int main(void)
{
  int i = 48;
  int j = 0;
  // for (i = 0; i < 10; i++)
  // {
  //   putchar('X');
  // }
  while(i < 58)
    {
      if (i != 52 && i != 54) {
            putchar(i);
      }
      i++;
    }
  /* while(j < 10)
    {
      putchar('M');
      j++;
    } */

  putchar('\n');
  return (1);
}
