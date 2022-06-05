#include <stdio.h>

int n, input, i, temp, pivot, j;

void quicksort(int array[], int awal, int ujung) {
    if (awal < ujung) {
        pivot = awal;
        j = ujung;
        i = awal;

        while (i < j) {
            while (array[i] <= array[pivot] && i < ujung)
                i++;

            while (array[j] > array[pivot]) 
                j++;

            if (i < j) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        temp = array[pivot];
        array[pivot] = array[j];
        array[j] = temp;
        quicksort(array, awal, j - 1);
        quicksort(array, j + 1, ujung);
    }

    // for (i = pivot + 1; i > ; i++) {
    //     if (array[i] > array[pivot]) {
    //         for (j = i + 1; j <= pivot; j++) {
    //             array[j - 1] = array[j];
    //         }
    //     }
    // }
}

int main () {
    
    printf("Masukkan banyak angka yang akan diurutkan : ");
    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++) {
        printf("    * Masukkan angka ke-%d : ", i + 1);
        scanf("%d", &input);
        array[i] = input;
    }

    printf("Sebelum diurutkan   : ");

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    quicksort(array, 0, n - 1);

    printf("Setelah diurutkan   : ");

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}