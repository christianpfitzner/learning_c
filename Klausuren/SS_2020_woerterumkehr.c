

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef char * String;



String woerterumkehr(String string)
{
    String string_neu  = malloc(strlen(string) + 1);
    String string_hilf = malloc(strlen(string) + 1);


    String delimiter = ", ";
    String woerter[100];


    strcpy(string_hilf, string);

    // woerter vereinzelt in ein String array ablegen
    woerter[0] = strtok(string_hilf, delimiter);
    unsigned int i=1;


    while( (woerter[i] = strtok(NULL, delimiter) ) != NULL)
    {
        printf("%s\n", woerter[i]);
        i++;
    }



    // den umgedrehten String nun wieder zusamensetzen
    strcpy(string_neu, woerter[--i]);

    for(i-- ; i>=0 ; i--)
    {
        strcat(string_neu, delimiter);
        strcat(string_neu, woerter[i]);
        printf("%s\n", string_neu);

    }


    return string_neu;

}






int main(void) {
 char *s = "eins, zwei, drei, vier";
 printf("%s\n", s);
 printf("%s\n", woerterumkehr(s));
 return 0;
}
