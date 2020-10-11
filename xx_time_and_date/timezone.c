#include <stdio.h> 
#include <time.h>     

int main(void) {
    
    tzset();
    
    printf("The timezone is %s and %s\n", tzname[0], tzname[1]);
    
    printf("The bias is %ld seconds\n", timezone); 

    return 0;
}