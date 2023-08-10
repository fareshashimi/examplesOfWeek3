#include <stdio.h>
#include <stdlib.h>
void main(){
    char *p;
    int i=0, k;

    p = (char *)malloc(sizeof(char));
    while(1){
        *(p + i) = getch();

        if(*(p + i)==13){
            break;
        }
        putchar('*');
        i++;
        p = (char*)realloc(p, (i+1)*sizeof(char));
    }

    putchar('\n');
    for(k=0; k<i; k++){
        putchar(*(p + k));
    }
    printf("\n");
}
