

#include <stdio.h>


int matrix[5][5] = {0};

int flood_fill(unsigned int c, unsigned int r,
               unsigned int target_value,
               unsigned int replacement)
  {
    if target_value == replacement
      return 0;
    else if matrix[c,r] != target_value
      return 0;
    else
      matrix[c,r] = replacement;


    flood_fill(c-1, r,   target_value, replacement);
    flood_fill(c+1, r,   target_value, replacement);
    flood_fill(c,   r-1, target_value, replacement);
    flood_fill(c,   r+1, target_value, replacement);

    return 0;
  }


int main(void)
{



  matrix[3][2] = 1;
  matrix[3][3] = 1;
  matrix[0][1] = 1;

  for(unsigned int c=0; c<5 ; c++)
  {
    for(unsigned int r=0; r<5 ; r++ )
    {
      printf("%d ", matrix[c][r]);
    }
    printf("\n");
  }



  return 0;
}
