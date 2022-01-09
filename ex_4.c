#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	 int number, original, rem, sum=0, digit=0;
	 printf("Enter number: ");
	 scanf("%d", &number);

	 original = number;

	 /* Counting number of digit in a given number */
	 while(number!=0)
	 {
		  digit++;
		  number = number/10;
	 }

	 /* After execution above loop number becomes 0
	    So copying original number to variable number */

	 number = original;
	 /* Finding sum */
	 while(number != 0)
	 {
		  rem = number%10;
		  sum = sum + pow(rem ,digit);
		  number = number/10;
	 }
	 /* Making decision */
	 if(sum == original)
	 {
	  	printf("%d is Narcissus Number.", original);
	 }
	 else
	 {
	  	printf("%d is not Narcissus Number.", original);
	 }
	 return(0);
}
