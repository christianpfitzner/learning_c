/**************************************************************
* 99_email_address_check.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-09
***************************************************************
* Check if a email is valid, based on plain string operations.
**************************************************************/

#include <stdio.h>
#include <string.h>

// declare typedef to ease coding
typedef char * String;

int main(void)
{
    // declare an arbitrary email adress
    char str[80] = "christian.pfitzner@thi.de";

    // find the index of the @ sign
    String domain_with_country = strchr(str, '@') + 1;
    printf("Domain with country: %s\n", domain_with_country);

    // setup the delimiter for the
    char delimiter[] = ".";

    String domain  = strtok(domain_with_country, delimiter);

    while( domain != NULL ) {
      printf("%s\n", domain);
      domain = strtok(NULL, delimiter);
   }

    return 0;
}
