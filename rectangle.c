#include <stdio.h>
#include <stdlib.h>

void rectangle(int, int, int *, int *);

int main(){
    int a, b;
    int *area, *perimeter;

    printf("Insert he values of a and b: ");
    scanf("%d%d", &a, &b);

    rectangle(a, b, &area, &perimeter);
    printf("\n\n The area is %d\n", area);
    printf(" The perimeter is %d\n", perimeter);

    return 0;
}

void rectangle(int a, int b, int *area, int *perimeter){
    *area = a * b;
    *perimeter = 2 * (a + b);
}
