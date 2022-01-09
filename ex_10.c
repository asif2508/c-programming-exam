/*Perfect number is a positive number which sum of all positive divisors excluding
that number is equal to that number. For example 6 is perfect number since divisor of 6 are 1, 2 and 3.
Sum of its divisor is 1 + 2+ 3 = 6*/
#include <stdio.h>

void  main(){
  int n,i,sum;
  printf("The Perfect numbers within the given range : ");
  for(n=1;n<=1000;n++){
    i=1;
    sum = 0;
    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }
    if(sum==n)
      printf("%d ",n);
  }
      printf("\n");
}

