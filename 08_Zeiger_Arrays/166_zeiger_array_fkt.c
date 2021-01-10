


#include <stdio.h>



typedef char * String;


void print(String p[])
{
    for (; *p != NULL; p++)
        printf("%s\n", *p);
}


int main(void)
{
    String liste[] = {"Bach", "Berg", NULL};
    print(liste);
    return 0;
}
