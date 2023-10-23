#include <stdio.h>

void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortDesiredOrder(int arr[], int n, int order[], int m) {
    int index = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] == order[i]) {
                exchange(&arr[j], &arr[index]);
                index++;
            }
        }
    }
}

int main() {
    int maxSize;

    // Input array size from the user
    printf("Enter the size of the array: ");
    scanf("%d", &maxSize);

    int array[maxSize];

    // Input elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < maxSize; i++) {
        scanf("%d", &array[i]);
    }

    int orderSize;

    // Input order array size from the user
    printf("Enter the size of the order array: ");
    scanf("%d", &orderSize);

    int order[orderSize];

    // Input elements of the order array from the user
    printf("Enter the elements of the order array:\n");
    for (int i = 0; i < orderSize; i++) {
        scanf("%d", &order[i]);
    }

    // Sort the array based on the specified order
    sortDesiredOrder(array, maxSize, order, orderSize);

    // Print the sorted array
    printf("Sample output: ");
    for (int i = 0; i < maxSize; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
