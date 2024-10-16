#include <stdio.h>
#include <stdlib.h>

int main()
{
  struct ArrayData {
    int size;
    int elements[100];
};

int main() {
    struct ArrayData data;
    int i;
    int sum = 0;


    printf("Enter the size of the array (max 100): ");
    scanf("%d", &data.size);


    if (data.size <= 0 || data.size > 100) {
        printf("Invalid size. Please enter a positive integer up to 100.\n");
        return 1;
    }


    printf("Enter %d elements:\n", data.size);
    for (i = 0; i < data.size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &data.elements[i]);
        sum += data.elements[i];
    }

    printf("The sum of all elements is: %d\n", sum);


    printf("Array in reverse order:\n");
    for (i = data.size - 1; i >= 0; i--) {
        printf("%d ", data.elements[i]);
    }
    printf("\n");

    return 0;
}
}
