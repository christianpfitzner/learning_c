


#include <stdio.h>
#include <string.h>



int main(void)
{
//    char *string1 = "a";
//    char string2 = '\n';
//
////
////    printf("%d\n", strlen(string1));
////    printf("%d\n", strlen(string2));
//
//    printf("%s\n", string1);
//    printf("%c\n", string2);


    char *test = "THI--";

    unsigned int n = 10;

//    char *sNeu = "";
    char *sNeu = malloc(30 + 1);
    for(unsigned int i=0 ; i< n; i++)
    {
        sNeu = strcat(sNeu, test);
        printf("%s\n", sNeu);
    }



    return 0;
}
