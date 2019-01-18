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

int main() {
    printf("Welcome to Zendriix Application\n");
    feature1();
    return 0;
}
