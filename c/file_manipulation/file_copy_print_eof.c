// C practice - file copying

#include <stdio.h>
/*copy input to output; EoF version*/

main(){
    int c;

    while (c = getchar()){
        putchar(c);
    }
}