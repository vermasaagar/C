#include <stdio.h>
#include <math.h>

int is_armstrong_number(int number) {
    int original_number = number;
    int num_digits = 0;
    int sum_of_digits = 0;
    
    // Count the number of digits
    while (number != 0) {
        number /= 10;
        num_digits++;
    }
    
    // Reset number to the original value
    number = original_number;
    
    // Calculate the sum of powered digits
    while (number != 0) {
        int digit = number % 10;
        sum_of_digits += pow(digit, num_digits);
        number /= 10;
    }
    
    // Check if the sum of powered digits is equal to the original number
    if (sum_of_digits == original_number) {
        return 1; // True
    } else {
        return 0; // False
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (is_armstrong_number(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}
