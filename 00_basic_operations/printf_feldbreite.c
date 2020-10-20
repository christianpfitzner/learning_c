/**************************************************************
* printf_feldbreite.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-10-20
***************************************************************
* Zahlen können mit Printf mit führenden Leerzeichen
* formatiert werden.
* Folie im Skript: 42
**************************************************************/



#include <stdio.h>



int main(void)
{
    printf("|----5----0|\n" );
    printf("|%10d|\n" , 4711);
    printf("|%+10d|\n" , 4711);
    printf("|%-10d|\n" , 4711);
    printf("|%-10d|\n" , -4711);
    printf("|%- 10d|\n", 4711);
    printf("|%- 10d|\n", -4711);
    printf("|%+-10d|\n", 4711);
    printf("|%010d|\n" , 4711);
    printf("|%+010d|\n", 4711);
    printf("|%*d|\n", 10, 4711);
    printf("|%*d|\n", -10, 4711);


    return 0;
}
