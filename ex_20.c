#include<stdio.h>
void print_prime(int m)
    { int i,j, *prime;
     for(i=1;i<m;i++)
        {
             for(j=2;j<i;j++)
             {
                if(i%j==0)
                {
                   break;
                }
             }
             if(i==j)
             {
                prime= &i;
                printf("%d\n",*prime);
             }

         }
    }
main()
{    int m;
     scanf("%d",&m);
        printf("The Prime Numbers are:\n");
          print_prime(m);
}