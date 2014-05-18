#include <stdio.h>

int main() {
    // The counter variable can be declared in the init-expression.
    for (int i = 0; i < 2; i++ ){ 
       printf("%d",i);
    }
    // Output: 01
    // The counter variable can be declared outside the for loop.
    int i;
    for (i = 0; i < 2; i++){
        printf("%d",i);
    }
    /* Output: 01
    These for loops are the equivalent of a while loop.*/
    i = 0;
    while (i < 2){
        printf("%d",i);
	break;
    }
    return 1;
}
