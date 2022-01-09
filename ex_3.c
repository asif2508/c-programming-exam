//Name: Rakibul Hasan Asif
//Student id: 218801022
/*Problem: Judge the prime numbers between 101 and 200 and output them.*/

#include<stdio.h>
#include<stdlib.h>
int main()
    {
    int i, j;

    //outer loop for numbers from 101-200
    for(i=101; i <=200;i++)
    {
        //inner loop for checking prime numbers
        for(j=2; j<=i; j++)
        {
        if (i % j == 0)
            {
            break;
            }
        }
        if(i == j)
        {
        printf("The prime number is %d\n", i);
        }
    }

    return 0;
    }
