#include <stdio.h>

// Multiplication Table of the Number entered By the User

int main()

{
    int a, i;
    printf("Enter the Number You want see the Multiplication table of  : \n");
    scanf("%d", &a);
    printf("The Multiplication table of %d is :\n", a);
    for (i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a, i, a*i );
    }

    return 0;
}
