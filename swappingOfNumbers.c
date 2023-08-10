#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

int main(){
    int n1=5, n2=2;

    printf("\n Before: %d, %d\n\n", n1, n2);

    swap(&n1, &n2);
    printf(" After: %d, %d\n", n1, n2);

    return 0;
}

void swap(int *x, int *y){
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}
