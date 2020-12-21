

#include <stdio.h>



void print(char **l)
{
    for (; *l != NULL; l++)
    {
        printf("%s\n", *l);
    }
}


void swap(char **s, char **t)
{
    {
    for (; *s != NULL; s++, t++)
        *t = malloc(strlen(*s) + 2); // Komma + \0
        char *x = strchr(*s, ' ');
        strcpy (*t, x + 1);
        strcat (*t, ", ");
        strncat(*t, *s, x - *s);
    }
    *t = NULL;
}


int main(void)
{
    char *s[] = {"Otto Meier", "Helga Kohl", "Hans Müller", NULL},
    *t[sizeof s / sizeof (char *)];
    print(s); swap(s, t); printf("\n"); print(t);
    return 0;
}
