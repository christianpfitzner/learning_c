#include <stdio.h>
#include <time.h>



/*
The Unix time is the number of seconds since the Unix epoch. The time() function returns the value of time in seconds since 0 hours, 0 minutes, 0 seconds, January 1, 1970, Coordinated Universal Time. If an error occurs, it returns -1
*/


int main (void) 
{
  time_t now = time(NULL);                          // get current unix timestamp

  if (now != -1)                                    // check if the call of the time function worked correctly
  {
    puts("Calling the time function failed"); 
  }

  printf("%ld\n", now);                             // print the unix time  


  return 0; 
}