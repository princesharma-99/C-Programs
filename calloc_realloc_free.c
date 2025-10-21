#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
    printf("Enter size: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &ptr[i]);

    printf("\nArray before realloc:\n");
    for (int i = 0; i < n; i++) printf("%d ", ptr[i]);

    // Increase size
    int newSize;
    printf("\nEnter new size: ");
    scanf("%d", &newSize);
    ptr = realloc(ptr, newSize * sizeof(int));

    printf("Enter new elements:\n");
    for (int i = n; i < newSize; i++) scanf("%d", &ptr[i]);

    printf("\nArray after realloc:\n");
    for (int i = 0; i < newSize; i++) printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}