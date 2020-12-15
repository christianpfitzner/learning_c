//
//  main.c
//  Ü5.3
//
//  Created by Lukas Sauer on 03.12.20.
//

#include <stdio.h>

int abfrage(int x)
{
    printf("ganze postive Zahl eingeben:");
    scanf("%i", &x);


    return x;
}



int main (void)
{
     int x=0, iter=0;

    while (1)
    {
        x=abfrage(x);

        if (x!=0 && x>0)
        {
            for (;x>=2;iter++)
            {
                if (x%2==0)
                    x=x/2;

                else
                    x=3*x+1;

            }

                printf("Iterationen: %d\n\n", iter);
                iter=0;
        }

      else if (x==0)
      {
          printf("\nProgramm beendet.\n\n");
          return 0;
      }
      else if (x<0)
      {
          printf("Ungültige Eingabe!\n\n ");
      }

    }


}
