#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit_string - checks if it's a string
 * @str: array string
 *
 * Return: Always 0
 */
int is_digit_string(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number1> <number2> ... <numberN>\n", argv[0]);
        return 1;
    }

    int sum = 0;

    for (int i = 1; i < argc; i++) {
        if (is_digit_string(argv[i])) {
            int num = atoi(argv[i]);
            sum += num;
        } else {
            printf("Error: '%s' is not a valid number.\n", argv[i]);
            return 1;
        }
    }

    printf("Sum: %d\n", sum);

    return 0;
}
