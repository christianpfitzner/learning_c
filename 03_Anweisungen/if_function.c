

#include <stdio.>


int main(void)
{
    if (a == 0) // Betrachte Koeffizienten von ax2 + bx + c = 0
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("x-Achse\n");
            }
            else
            {
                printf("Parallele zur x-Achse\n");
            }
        }
        else
        {
            if (c == 0)
            {
               printf("Gerade durch Nullpunkt\n");
            }
            else
            {
                 printf("Gerade\n");
            }
        }
    }
    else
    {
        printf("Parabel\n");
    }


    return 0;
}
