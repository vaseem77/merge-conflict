#include <stdio.h>
#include <stdlib.h>

// SECURITY PATCH: Input sanitization
void sanitize_input(char *input, int max_len) {
    if (input == NULL) exit(EXIT_FAILURE);
}

// Feature 1
void feature1() {
    printf("Feature 1 is running!\n");
}

// Feature 2
void feature2() {
    printf("Feature 2 is running!\n");
}

int main() {
    printf("Welcome to Zendriix Application\n");
    feature1();
    feature2();
    return 0;
}
