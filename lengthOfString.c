#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringLenght(char *);

int main(){
    char str[100];

    printf("Insert any string: ");
    scanf("%s", str);


    printf("\n\n The length of %s is %d\n", str, stringLenght(str));

    return 0;
}

int stringLenght(char *str){
    int ln=0;

    while(*str!='\0'){
        ln++;
        str++;
    }

    return ln;
}
