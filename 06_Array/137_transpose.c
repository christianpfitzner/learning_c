#include <stdio.h>


void ausgabe(int m, int n, int matrix[m][n]) {
  for (int z = 0; z < m; z++)
  { // gib (m x n)-Matrix aus
    for (int s = 0; s < n; s++)
      printf("%d ", matrix[z][s]);

    printf("\n");
  }
  printf("\n");
}


void transponiere(int m, int n, int a[m][n], int b[n][m]) {
  // Zeilen und Spalten vertauschen
  for (int z = 0; z < m; z++)
    for (int s = 0; s < n; s++)
      b[s][z] = a[z][s];
}
int main(void)
{
  int a[3][3] = { {1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9 }};
  int b[3][3];
  ausgabe(3, 3, a);
  transponiere(3, 3, a, b);
  ausgabe(3, 3, b);
  return 0;
}
