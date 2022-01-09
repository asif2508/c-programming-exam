#include<stdio.h>
#include<stdlib.h>

int main()
    {
    int score;
    printf("Enter Your score: ");
    scanf("%d", &score);

    if(score >= 90)
    {
    printf("Your grade is A");
    }
    else if(score >=60)
    {
    printf("Your grade is B");
    }
    else if(score <60)
    {
    printf("Your grade is C");
    }
    else{
    printf("Invalid grade");
    }

    return 0;
    }
