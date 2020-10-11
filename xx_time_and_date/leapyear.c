#include <stdio.h>
#include <stdbool.h>




bool isLeapYear(int year) {

    if (year % 4 != 0) {
        
        return false;
    } else if (year % 400 == 0) {
        
        return true;
    } else if (year % 100 == 0) {
        
        return false;
    } else {
        
        return true;
    }
}


int main(void) {
    
    // Assume year >= 1582 in the Gregorian calendar.
    int years[] = { 2000, 2002, 2004, 2008, 2012, 2016, 2020,
        1900, 1800, 1600 };
  
    int size = sizeof(years) / sizeof(int);

    for (int i=0; i<size; i++) {

        if (isLeapYear(years[i])) {

            printf("%d is a leap year\n", years[i]);
        } else {

            printf("%d is not a leap year\n", years[i]);
        }
    }

    return 0;
}