/**************************************************************
* 188_struct_function_argument.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-01-07
***************************************************************
* Beispiel zur Übergabe einer Struktur an eine Funktion.
*
* Siehe Folie 188 im Skript
**************************************************************/


#include <stdio.h>


// struct to store cartesian x and y values of a 2d point
struct punkt
{
  double x, y;
};


// Function to add two points
// The result is returned in p3 as a reference
void add(struct punkt p1, struct punkt p2, struct punkt *p3)
{
  (*p3).x = p1.x + p2.x; // . hat höheren Rang als *
  (*p3).y = p1.y + p2.y;


  // alternative Schreibweise mittels Pfeiloperator -> als Ersatz für (*p3)
  p3->x = p1.x + p2.x;
  p3->y = p1.y + p2.y;

}


int main(void)
{
  // declare and init points
  struct punkt a = { 3.2, 4.7};
  struct punkt b = {-4.6, 9.2};
  struct punkt c;

  // calling function to add two cartesian points
  add(a, b, &c);

  // output to the user
  printf("c = (%g, %g)", c.x, c.y);

  return 0;
}
