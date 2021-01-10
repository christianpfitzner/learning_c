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
typedef struct person {
  char name[8];
  int alter;
} Person;

typedef struct anschrift {
  char strasse[10];
  int hausnummer;
  int plz;
  char stadt[10];
} Anschrift;

// Struktur zum Speichern einer Familie
typedef struct familie {
  char name[10];
  Person vater, mutter, kind[2];
  Anschrift adresse;
} Familie;












int main(void)
{
  Familie meier = {"Meier", {"Otto", 43}, {"Helga", 39}, { {"Lisa", 5}, {"Bob", 2} }   };

  printf("%s = %s + %s + %s", meier.name,
                              meier.vater.name,
                              meier.mutter.name,
                              meier.kind[0].name);

  return 0;
}
