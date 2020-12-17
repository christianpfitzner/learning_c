

#include <stdio.h>
#include <stdbool.h>



double fct(double x, int selected_function_idx)
{
  switch (selected_function_idx) {
    case 1:
      return 2*x - 4;
      break;
    case 2:
      return (1.0/3.0) + (1.0/x);
      break;
    case 3:
      return exp(x) - 2*x - 3;
      break;
    case 4:
      return pow(x-2, 3) + 3;
      break;
    case 5:
      return sin(2*x);
      break;
    default:
      printf("unkonwn function selected\n");
      break;

  }

}


bool nullstelle(int selected_function_idx,
                double start, double end,
                double accuracy,
                double* approximation,
                unsigned int* iterations)
{
  // initialize pointer values
  *iterations = 0;


  double x = 0.0;
  for (unsigned int i=0 ; i< 100 ; i++)
  {
    x = (start + end) / 2.0;

    printf("%lf\n", x);

    const double y = fct(x, selected_function_idx);


    *iterations  = i;

    if(y == 0)
    {
      *approximation = x;
      return true;
    }
    else if (y < 0)
    {
      start = x;
    }
    else if (y > 0)
    {
      end = x;

    }
  }


  *approximation = start;
  return 0;
}


int main(void)
{

  double start = -50.0;
  double end   =  20.0;


  double approx = 0.01;

  int iterations = 0;


  nullstelle(3, start, end, 10.0, &approx, &iterations);

  printf("Die Nullstelle ist %lf\n",    approx);
  printf("Anzahl an Iterationen: %d", iterations);

  return 0;
}
