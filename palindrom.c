#include <stdio.h>

int is_palindrome(int number) {
    int original_number = number;
    int reversed_number = 0;
    
    // Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversed_number = reversed_number * 10 + digit;
        number /= 10;
    }
    
    // Check if the reversed number is equal to the original number
    if (reversed_number == original_number) {
        return 1; // True
    } else {
        return 0; // False
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (is_palindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
    
    return 0;
}

