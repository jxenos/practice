#include <stdio.h>
// count blanks tabs and new lines

main(){
    double nc;
    int n;
    char c;
    while ((c = getchar()) != EOF)
        for (nc = 0; (c = getchar()) != EOF; nc++)
            if (isWhiteSpace(c))
            n++;
    
    printf("%d\n", n);
}

int isWhiteSpace(char c){
    return c == '\n' | c == '\t' | c == ' ';
}

