

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


    // Ausgabe
    printf("Name : %s\n",  tom.name   );
    printf("Alter : %d\n", tom.alter  );
    printf("Gewicht: %g" , tom.gewicht);
    return 0;
}
