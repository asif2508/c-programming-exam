#include<stdio.h>
#include<stdlib.h>
int main()
    {
    int A, B,C;
    //Taking inputs A and B
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);

    //exchanging values

    C = A;
    A = B;
    B = C;

    //Printing the outputs

    printf("The value of A is %d\n", A);
    printf("The value of B is %d\n", B);
    return 0;

    }
