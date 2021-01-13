

#include <stdio.h>


typedef struct person {
  char *name;
  int alter;
} Person;


typedef struct familie
{
  char *name;
  Person *vater, *mutter, *kind[2];
} Familie;


int main(void)
{
  Person otto  = {"Otto",  43};
  Person helga = {"Helga", 39};
  Person lisa  = {"Lisa",   5};
  Person bob   = {"Bob",    8};

  Familie meier = {"Meier", &otto, &helga, { &lisa, &bob }};

  printf("%s = %s + %s + %s + %s",  meier.name,
                                    meier.vater->name,
                                    meier.mutter->name,
                                    meier.kind[0]->name,
                                    meier.kind[1]->name);
  return 0;
}
