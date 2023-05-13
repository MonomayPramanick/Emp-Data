#include <stdio.h>

//#define MAX_SIZE 10

int main() {
    int arr[10];
    int *ptr;
    int i, n;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter the %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;  // set the pointer to the first element of the array

    printf("The elements of the array are:\n");
    for (i = 1; i <=
     n; i++) {
        printf("%d ", *ptr);  // dereference the pointer to get the value at the current position
        ptr++;  // move the pointer to the next position in the array
    }
    printf("\n");

return 0;
}