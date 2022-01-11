
#include <stdio.h>
#include <string.h>


int main(void)
{
    char s[]   = "christian.pfitzner@thi.de";
    char s3[]   = "Christian.Pfitzner@thi.de";

//    char s2[]  = "bob.maier@thi.de";
    char del[] = "@."; // Trennzeichen

    char domain = strchr(s, "@");
    printf("Domain: %s", domain);

//    for (char *t = strtok(s, del); t; t = strtok(NULL, del))
//    {
//        printf("%s\n", t);
//    }


    return 0;
}



