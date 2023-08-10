#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, sum=0;

    printf("Insert a number of element: ");
    scanf("%d", &n);

    int *ptr = malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("\n\n There is no elements in the heap.\n");
    }

    printf("\nInsert %d elements:\n", n);
    for(int i=0; i<n; i++){
        printf("%d.element: ", i);
        scanf("%d", ptr+i);

        sum+=*(ptr+i);
    }
    printf("\n\n The sum of %d elements is %d\n", n, sum);

    return 0;
}
