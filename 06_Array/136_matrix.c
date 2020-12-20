/**************************************************************
* 136_matrix_3d.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-17
***************************************************************
*
* Siehe Folie 136 im Skript
**************************************************************/


// includes
#include <stdio.h>              // printf


int main(void)
{
    // Initialisierung mit drei Ziffern zur besseren Unterscheidung
    int arr[2][3][4] = { { {111, 112, 113, 114}, {121, 122, 123, 124}, {131, 132, 133, 134} },
                         { {211, 212, 213, 214}, {221, 222, 223, 224}, {231, 232, 233, 234} } };




    // Schleife über Matrix zur Ausgabe
    for(unsigned int i=0 ; i<2 ; i++ )
    {
        for(unsigned int j=0 ; j<3 ; j++)
        {
            for(unsigned int k=0 ; k<4 ; k++)
            {
                printf("[%d][%d][%d] hat folgenden Wert %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;

}
