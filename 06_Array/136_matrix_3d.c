/**************************************************************
* 136_matrix.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-08
***************************************************************
*
* Siehe Folie 136 im Skript
**************************************************************/



#include <stdio.h>

// Funktion zur Ausgabe einer Matrix
// m: Anzahl der Zeilen in der Matrix
// n: Anzahl der Spalten in der Matrix
// matrix: 2D-Vektor
void ausgabe(int m, int n, int matrix[m][n])
{
    // Ausgabe alles Zeilen -> z
    for (int z = 0; z < m; z++)
    {
        // Ausgabe aller Spalten -> s
        for (int s = 0; s < n; s++)
        {
            printf("%d ", matrix[z][s]);
        }
        printf("\n");
    }
    printf("\n");
}


int main(void)
{
    int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int b[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    ausgabe(2, 3, a);
    ausgabe(3, 2, b);
    return 0;

}
