


#include <stdio.h>

void ausgabe(int m, int n, int matrix[m][n])
{
    for (int z = 0; z < m; z++)
    { // gib (m x n)-Matrix aus
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
