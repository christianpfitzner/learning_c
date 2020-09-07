/**************************************************************
* comments.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-09-07
***************************************************************
* This programm illustrates the basic principles of comments
* as well as best practice
**************************************************************/

// a tiny header at each programm helps to understand the following programm


// std includes
#include <stdio.h>                


int main(void)                    
{
  /*normal c comment over
  multiple lines of code */
  printf("First comment\n"); 

  // the same comment could be displayed with two 
  // separate line comments
  printf("Second comment\n"); 

  // not the best solution for a comment. The reason is, that this single line might not be displayed propperly on a small display and parts might not be visible to another developer. 
  printf("Third comment"); 


  return 0;                       
}

/*
general tipps for comments:

- Comments should contain more information than the plain code. The following example is obvious: 
  i=i+1 // increment of i by 1

- comment only small parts of code in contrast to long comments for a big part of code

- a small comment is better than no comment

- use small sentences instead of long and narrative comments

