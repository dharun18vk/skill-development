1--------------------------------------------
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
	if (num%2 == 0){
            printf("%d\n even",i);
        }
	else{
	    print("%d odd",i);
    }
        
        printf("complete");

    return 0;
}

2------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool prime = true;
    scanf("%d", &num);
    int i;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            prime = false;
            break;
        }
    }
    if (prime) {
        printf("prime");
    } else {
        printf("not prime");
    }
    return 0;
}

3--------------------------------------

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int i;
    int fact = 1;
    for (i = 1; i <= num; i++) {
        fact=fact*i;
    }
    printf("%d", fact);
    return 0;
}
4-----------------------------------------

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int sum = 0;
    for (int i = 2; i <= num + 1; i++) {
        int fact = 1; 
        for (int j = 1; j <= i; j++) {
            fact = fact * j;
        }
        sum = sum + fact;
    }
    printf("%d", sum);
    return 0;
}

5-----------------------------------------

#include <stdio.h>

int main()
{   
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
      
        for(int j=0;j<a;j++)
        {
            if(i==0 || j==0 || j==a-1 || i==a-1){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

6-------------------------------------------------------

#include <stdio.h>

int main()
{
    int n = 5; // Number of rows and columns

    for (int i = 0; i < n; i++) // Rows
    {
        for (int j = 0; j < n; j++) // Columns
        {
            int val = (i + j) % n + 1;
            printf("%d", val);
        }
        printf("\n");
    }

    return 0;
}

7------------------------------------------------------

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

