

#include <stdio.h>


int main(void)
{
  unsigned int h = 10;
  unsigned int l = 10;
  unsigned int w = 10;

  const int v = h*l*w;
  printf("The calculated volume is %d mm^3\n", v);



  // **************************************************
  unsigned int h = 10; // height of block in mm
  unsigned int l = 10; // length of block in mm
  unsigned int w = 10; // width of block in mm

  // calculation of volume in mm^3
  const int v = h*l*w;
  printf("The calculated volume is %d mm^3\n", v);



  // **************************************************
  unsigned int height = 10; // height of block in mm
  unsigned int length = 10; // length of block in mm
  unsigned int width = 10; //width of block in mm

  // output to the user
  const int volume = height*length*width;
  printf("The calculated volume is %d mm^3\n", volume);



  // **************************************************
  // init of variable
  unsigned int height_in_mm = 10; // height of block in mm
  unsigned int length_in_mm = 10; // length of block in mm
  unsigned int width_in_mm  = 10; //width of block in mm


  // output to the user
  const int volume_in_mm3 = height_in_mm*length_in_mm*width_in_mm;
  printf("The calculated volume is %d mm^3\n", volume_in_mm3);



}
