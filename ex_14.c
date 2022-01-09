// C program to find sum of series
// x+ x^2/2 + x^3/3 + ....+ x^10/10
#include <math.h>
#include <stdio.h>

double sum(int x)
{
	double i, total = 0.0;
	for (i = 1; i <= 10; i++)
		total = total +(pow(x, i) / i);
	return total;
}

// main function
int main()
{
	int x;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("%.2f", sum(x));
	return 0;
}

