#include <stdio.h>

int main() {
    int a = 10, b = 16, c = 13;
    int greatest_val;        
    char greatest_var_name;

    greatest_val = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    greatest_var_name = (a == greatest_val) ? 'a' :
                        (b == greatest_val) ? 'b' :'c';

    printf("The greatest number is %c: %d\n", greatest_var_name,greatest_val);

    return 0;
}
