


#include <stdio.h>



void print(char *p[])
{
    for (; *p != NULL; p++)
        printf("%s\n", *p);
}


int main(void)
{
    char *liste[] = {"Bach", "Berg", NULL};
    print(liste);
    return 0;
}
