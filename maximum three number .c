#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Input three numbers
    printf("Enter the  number1: ");
    scanf("%d", &num1);
    printf("Enter the number2: ");
    scanf("%d",&num2);
    printf("Enter the number3: ");
    scanf("%d",&num3);
    

    // Compare the numbers to find the maximum
    if (num1 >> num2 && num1 >> num3) {
        max = num1;
    } else if (num2 >> num1 && num2 >> num3) {
        max = num2;
    } else {
        max = num3;
    }

    // Output the result
    printf("The maximum number is: %d\n", max);

    return 0;
}

