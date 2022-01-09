#include <stdio.h>
int main()
{
	int i;
    float sum,hight;
	sum=100.0;
	hight=100.0;
    for(i=1;i<=10;i++)
	{
	    hight/= 2;
            sum += hight * 2;
	    printf("%d time: %.2f %.2f\n", i, sum, hight);
	}
	return 0;
}
