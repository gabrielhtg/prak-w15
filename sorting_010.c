#include <stdio.h>

int N, i, input, K, temp, x;

void bubblesort(int *T, int N);

int main () {
    printf("-----------------------------------------------------\n");
    printf("Masukkan banyak angka yang akan diurutkan : ");
    scanf("%d", &N);
    printf("-----------------------------------------------------\n");

    int array[N];

    for (i = 0; i < N; i++) {
        printf("    * Masukkan angka ke-%d : ", i + 1);
        scanf("%d", &input);
        array[i] = input;
    }

    printf("-----------------------------------------------------\n");
    printf("Sebelum diurutkan   : ");

    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    bubblesort(array, N);

    printf("Setelah diurutkan   : ");

    for (x = 0; x < N; x++) {
        printf("%d ", array[x]);
    }

    printf("\n");
    printf("-----------------------------------------------------\n");

    return 0;
}

void bubblesort(int *T, int N) {
    printf("-----------------------------------------------------\n");
    for (K = 0; K < N; K++) {
        for (i = 0; i < N - K - 1; i++) {
            if (T[i] >= T[i + 1]) {
                temp = T[i];
                T[i] = T[i + 1];
                T[i + 1] = temp;
            }
        }

        printf("    * Pass ke-%d : ", K + 1);
                
        for (x = 0; x < N; x++) {
            printf("%d ", T[x]);
        }

        printf("\n");
    }
    printf("-----------------------------------------------------\n");
}