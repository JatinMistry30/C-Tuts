#include <stdio.h>

int main() {
    int result;

    printf("Type a character, then press Enter:\n");
    result = (getchar() != EOF);

    printf("Result of getchar() != EOF is: %d\n", result);

    return 0;
}
