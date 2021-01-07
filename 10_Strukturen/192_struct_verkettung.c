


struct person {
  char *name;
  int alter;
};


struct familie
{
  char *name;
  struct person *vater, *mutter, *kind[2];
};


int main(void)
{
  struct person otto  = {"Otto",  43};
  struct person helga = {"Helga", 39};
  struct person lisa  = {"Lisa",   5};
  struct person bob   = {"Bob",    8};

  struct familie meier = {"Meier", &otto, &helga, { &lisa, &bob }};

  printf("%s = %s + %s + %s + %s",  meier.name,
                                    meier.vater->name,
                                    meier.mutter->name,
                                    meier.kind[0]->name,
                                    meier.kind[1]->name);
  return 0;
}
