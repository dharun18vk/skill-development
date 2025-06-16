#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter sides A, B, C: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", a + b); 
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is possible\n");
    } 
    else if (a==b && b==c){
        printf("it is an equilateral Triangle");
    }
    else {
        printf("Triangle not possible\n");
    }

    return 0;
}
