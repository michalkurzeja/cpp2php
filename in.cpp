#include <stdio.h>
#include <lol.php>

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
    newguy = new Date();
    while (i < 2){
        printf("%d",i);
	    break;
    }

    do {
        i++;
    } while ( i < 10);

    return 1;
}
