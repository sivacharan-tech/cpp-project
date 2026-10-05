#include <stdio.h>

// Function to get maximum value
int getMax(int arr[], int n) {
    int i, max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

// Counting sort for radix (based on digit place)
void countSort(int arr[], int n, int exp) {
    int output[n];  // output array
    int count[10] = {0};
    int i;

    // Count occurrences
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Cumulative count
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy back to original array
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// Main radix sort function
void radixSort(int arr[], int n) {
    int exp;
    int max = getMax(arr, n);

    // Apply counting sort for each digit
    for (exp = 1; max / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

// Display function
void display(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Before sorting: ");
    display(arr, n);

    radixSort(arr, n);

    printf("After sorting: ");
    display(arr, n);

    return 0;
}

