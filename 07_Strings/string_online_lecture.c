

#include <string.h>
#include <stdio.h> // printf, scanf


int main(void)
{
    char str1[] = "welt";
    char str2[] = "Das ist das Hallo welt Beispiel";

    char str_tmp[40] = "";

    printf("str1:    %s\n", str1);
    printf("str2:    %s\n", str2);

    char *ptr;
    ptr = strstr(str2, str1);
    if(ptr != NULL)
    {
        printf("Der String kommt vor");
        strncpy(ptr, "Welt", 4);
    }
    else
    {
        printf("Wort konnte nicht gefunden werden");
    }

    printf("str2:    %s\n", str2);


    return 0;
}
