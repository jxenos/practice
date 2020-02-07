#include <stdio.h>

// convert strings with multiple spaces to one space

main(){
    char c;
    int n;
    int last_char_space;
    int space_bool;
    last_char_space = 0;
    for (n=0; (c = getchar()) != EOF; n++)
        space_bool = is_space(c);
        // char is not a space, print and reset lock
        if (!space_bool){
            putchar(c);
            last_char_space = 0;
        // if c is a space check if last char was space
        } else if (!last_char_space){
            putchar(c);
            last_char_space = 1;
        } else {
            // go to next char without printing

        }
    }    
}

int is_space(char c){
    return c == ' ';
}
