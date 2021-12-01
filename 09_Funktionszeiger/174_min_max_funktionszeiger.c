/**************************************************************
* 174_min_max_funktionszeiger.c
***************************************************************
* author: Christian Pfitzner
* date: 2021-11-30
***************************************************************
* This program  demonstrates function pointers with to
* functions for min and max value
**************************************************************/


#include <stdio.h>



int min(int a, int b)
{
    return a < b ? a : b;
}


int max(int a, int b)
{
    return a > b ? a : b;
}

int m4(int a, int b, int c, int d, int m2_fkt(int, int) )
{
    // int (*m2)(int, int)
    return m2_fkt ( m2_fkt (a, b), m2_fkt (c, d) );
    // return (*m2)( (*m2)(a, b), (*m2)(c, d) );
}



int main(void)
{
    int a = 1, b = 2, c = 3, d = 4;
    printf("min(%d, %d, %d, %d) = %d\n", a,b,c,d, m4(a,b,c,d, min));
    printf("max(%d, %d, %d, %d) = %d\n", a,b,c,d, m4(a,b,c,d, &max));
    return 0 ;
}
