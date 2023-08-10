#include <stdio.h>
#include <stdlib.h>

void toBinary(unsigned);

int main(){
    unsigned n;

    printf("Insert any decimal number: ");
    scanf("%u", &n);

    toBinary(n);
    printf("\n");

    return 0;
}

void toBinary(unsigned x){
    int i=1, j;
    unsigned *p;

    p = &x;
    while(1){
        *(p+i) = x%2;
        x/=2;

        if(x==1){
            *(p+i+1) = x;
            break;
        }
        i++;
    }
    for(j=i+1; j>0; j--){
        printf(" %u", *(p+j));
    }
}
