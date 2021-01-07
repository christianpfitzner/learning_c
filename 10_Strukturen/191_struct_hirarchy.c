/**************************************************************
* 191_struct_hirarchy.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-01-07
***************************************************************
* Ebenen mittels Struct
*
* Siehe Folie 191 im Skript
**************************************************************/

// Struktur zum Speichern eines Namens und des Alters
struct person {
  char name[8];
  int alter;
};

// Struktur zum Speichern einer Familie
struct familie {
  char name[10];
  struct person vater, mutter, kind[2];
};


int main(void)
{
  struct familie meier = {"Meier", {"Otto", 43}, {"Helga", 39}, { {"Lisa", 5} }
  };

  printf("%s = %s + %s + %s", meier.name,
                              meier.vater.name,
                              meier.mutter.name,
                              meier.kind[0].name);

  return 0;
}
