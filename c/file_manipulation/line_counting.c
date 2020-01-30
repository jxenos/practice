#include <stdio.h>

/* count lines in input */
main(){
    inc c,l;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl)
}