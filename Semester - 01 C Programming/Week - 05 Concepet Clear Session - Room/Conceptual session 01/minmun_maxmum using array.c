#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("\n\n");


    int even_counter = 0, odd_counter = 0;
    int even_values[n], odd_values[n];

    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            even_values[even_counter] = array[i];
            even_counter++;
        } else {
            odd_values[odd_counter] = array[i];
            odd_counter++;
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < even_counter; i++) {
        printf("%d ", even_values[i]);
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < odd_counter; i++) {
        printf("%d ", odd_values[i]);
    }

    printf("\nThe count of even numbers is: %d\n", even_counter);
    printf("The count of odd numbers is: %d\n", odd_counter);

    return 0;
}
