

#include <stdio.h>



int main(void)
{
    int n;

    // generate an int array with variable length
    // the array is filled with numbers starting with 0
    do
    {
        printf("\nL�nge? ");
        scanf("%d", &n);

        int zahlen[n];

        for (int i = 0; i < n; i++)
        {
            zahlen[i] = i;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", zahlen[i]);
        }

    } while (n > 0);


}
