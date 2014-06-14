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

    if(true) {
        return new Awesome();
    }

    if(i) {
        break;
    } else {
        return;
    }

    if(1) {
        return false;
    } else if (2) {
        if(true)
            return -5;
    }

    do {
        i++;
    } while ( i < 10);

    switch(i) {
        case 1:
            a = -5;
            break;
        case 2:
            return 3;
        case 4:
        case 5:
            return new Date();
        default:
            return -1;
    }

    return 1;
}
