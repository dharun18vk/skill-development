#include <stdio.h>

int main() {
    char binary[65];
    int decimal = 0;
    printf("Enter a binary number: ");
    scanf("%s", binary);
    for (int i = 0; binary[i] != '\0'; i++) 
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
