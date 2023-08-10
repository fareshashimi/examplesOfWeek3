#include <stdio.h>
#include <stdlib.h>

int *seriesOfArrays(int [], int, int [], int);

int main(){
    int arr1[5] = {6, 7, 8, 9, 10};
    int arr2[7] = {13, 7, 12, 9, 7, 1, 14};

    int *ptr = seriesOfArrays(arr1, 5, arr2, 7);

    printf("\n\n The series of merged array:\n");
    for(int i=0; i<12; i++){
        printf(" %-3d ", ptr[i]);
    }
    printf("\n");

    return 0;
}

int *seriesOfArrays(int arr1[], int size_1, int arr2[], int size_2){
    int *result = (int *)calloc(size_1+size_2, sizeof(int));
    int i, j;

    for(i=0; i<size_1; i++){
        result[i] = arr1[i];
    }

    for(j=0; j<size_2; j++, i++){
        result[i] = arr2[j];
    }

    return result;
}
