#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1:
            result = a + b;
            printf("\nAdd = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("\nSubtract = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("\nMultiply = %.2f", result);
            break;

        case 4:
            if (b != 0) {
                result = a / b;
                printf("\nDivision = %.2f", result);
            } else {
                printf("\nDivision is not allowed (divide by zero).");
            }
            break;

        default:
            printf("\nInvalid choice!");
            break;
    }
    return 0;

}