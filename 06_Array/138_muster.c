/**************************************************************
* 138_muster.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-08
***************************************************************
*
* Siehe Folie 138 im Skript
**************************************************************/



void fuelle(int m, int n, char a[m][n], int k, int l, char b[k][l])
{
    for (int z = 0; z < m; z++)
    {
        for (int s = 0; s < n; s++)
        {
            a[z][s] = b[z%k][s%l];
        }
    }
}


void drucke(int m, int n, char a[m][n])
{
    for (int z = 0; z < m; z++)
    {
        for (int s = 0; s < n; s++)
            {
            printf("%c", a[z][s]);
        }
        printf("\n");
    }
}


int main(void)
{
    char muster[3][4] = { { '*', '*' , '*', '*'},
                          { ' ', '|', ' ', ' '},
                          {'\\', '=', '/', ' '} };

    char flaeche[5][18];
    fuelle(5, 18, flaeche, 3, 4, muster);
    drucke(5, 18, flaeche);
    return 0;
}
