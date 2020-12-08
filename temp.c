
#include <stdio.h>


int *max(const int *x, const int *y)
{
    return *x > *y ? x : y;
}
int main(void)
{
    int a = 47, b = 11, *c = max(&a, &b);

    printf("max(%d, %d) = %d\n", a, b, *c);

    printf("max(%d, %d) = %d\n" , b, a, *max(&b, &a));

//    printf("a zeigt auf %p \n", &a);
//    printf("b zeigt auf %p \n", &b);
//    printf("%p\n", max(&b, &a));

    return 0;
}
