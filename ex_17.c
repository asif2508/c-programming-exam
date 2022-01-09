#include<stdio.h>
main()
{
    int a[10], max,min,sum,i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    max=min=a[0];
    for(i=0;i<10;i++)
    {
        if (a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        sum+=a[i];
    }
    printf("The max is:%d, The min is:%d, The average is:%f\n",max,min,sum/10.0);

    return 0;
}
