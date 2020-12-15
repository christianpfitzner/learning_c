/**************************************************************
* 999_array_enum_coordinate.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-11
***************************************************************
*
*
**************************************************************/


#include <stdio.h>


enum Coordinate3D
{
    X,      // entspricht int X = 0
    Y,      // entspricht int Y = 1
    Z       // entspricht int Z = 2
};


int main(void)
{
    int coordinate[3] = {1,2,3};

    // Die Verwendung eines Enums erhöht die Lesbarkeit
    // im Programm. Der Entwickler muss nicht mehr darauf
    // achten, dass der 0. Index dem x-Wert entspricht,
    // sondern verwendet einfach die Konstante X.
    printf("x: %d", coordinate[0]);
    printf("y: %d", coordinate[1]);
    printf("z: %d", coordinate[2]);

    return 0;
}
