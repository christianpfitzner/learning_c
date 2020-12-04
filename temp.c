

// Verwenden Sie nach Möglichkeit immer const

int function(int a,             // a ist folge Variable
             int b,
             int c,
             int d)             // lokale Variablen der Funktion function
{
    a = 100;

    return a+b;
}

int function2(int a, int b) // lokale Variablen der Funktion function2
{
    return a*b;
}

int main(void)
{
    const int a = 5;



    printf("%d \n", function(a,10));
    printf("%d \n", function2(a,10));

    return 0;
}
