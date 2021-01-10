

#include <string.h>
#include <stdio.h>

struct person {
    char name[10];
    int alter;
    double gewicht;
};



int main(void)
{
    struct person tom = {"Tom",             // 1. Element ist der Name
                            15,             // 2. Element ist das Alter
                          59.3  };          // 3. Element ist das Gewicht

    struct person tim;
    tim.alter = 19;
    tim.gewicht = 70;

    // Ausgabe
    printf("Name : %s\n",  tim.name   );
    printf("Alter : %d\n", tim.alter  );
    printf("Gewicht: %g" , tim.gewicht);
    return 0;
}
