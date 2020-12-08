

#include <stdio.h>
#define SHOWERROR 1


int main(void)
{

    // Fall 1: Der Zeiger kann verändert werden, die referenzierte Variable ist konstant.
    int i = 47, j = 11;
    const int * p1 = &i;
    printf("p1 zeigt auf die Adresse %p mit dem Wert %d\n", p1, *p1);
    p1  = &j;
    printf("p1 zeigt auf die Adresse %p mit dem Wert %d\n\n", p1, *p1);

//#if SHOWERROR
//    // p1 ist ein Zeiger auf ein konstantes int
//    *p1 = 42;
//#endif // SHOWERROR


    // Fall 2: Der Zeiger ist konstant, die referenzierte Variable kann verändert werden.
    int * const p2 = &i;
    printf("p2 zeigt auf die Adresse %p mit dem Wert %d\n", p2, *p2);
    *p2 = 42;
    printf("p2 zeigt auf die Adresse %p mit dem Wert %d\n\n", p2, *p2);

#if SHOWERROR
    // p2 ist ein konstanter Zeiger auf ein int
    p2  = &j;
#endif

    return 0;
}
