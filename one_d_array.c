#include <stdio.h>
#include <conio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nArray elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSum = %.2f", sum);
    printf("\nAverage = %.2f\n", sum / n);

    return 0;
}