#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, space, maxSymbols, maxRow;
    maxSymbols = 100;
    space = maxSymbols;
    maxRow = maxSymbols;
    for(i=1; i<=maxSymbols; i++) {
        for(j=1; j<=maxRow; j++) {
            if(j<space) {
                printf(" ");
            }
            else {
                printf("X");
            }
        }
        printf("\n");
        space--;
        maxRow++;
    }

    return 0;
}
