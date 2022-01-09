//Name: Rakibul Hasan Asif
//Student Id: 218801022
/*Problem: Input two numbers A and B.,
 please output which is small and which is big (Please use pointer and function to solve this question).*/

#include<stdio.h>
#include<stdlib.h>

int Big_numbers()
    {
     int a;
    int b;

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    int *pA = &a;
    int *pB = &b;

    if(*pA > *pB)
    {
    printf("A = %d is the bigger number", *pA);
    }
    else if(*pB > *pA)
    {
    printf("B = %d is the bigger number", *pB);
    }
    else{
    printf("Two numbers are equal");
    }
    }
int main()
    {
   Big_numbers();
    return 0;
    }
