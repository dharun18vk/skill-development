1------------------------------------------------
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        // Print spaces
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }

        // Print stars
        for (int j = 0; j < a - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
2-------------------------------------------

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int s = 0; s < a - i-1; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i+1; j++)
        {
            printf("*");
        }
        
    }

    return 0;
}
3------------------------------------------

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int s = 0; s < a - i - 1; s++)
        {
            printf("  ");
        }
        for (int j = -i; j <= i; j++)
        {
            printf("%d ", j < 0 ? -j : j);
        }
        printf("\n");
    }
    return 0;
}
