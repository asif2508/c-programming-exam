#include<stdio.h>
int main()
{
    int a[10]={22,23,45,67,38,44,78,52,43,75};
    int i,temp;
    for(i=0;i<5;i++)
    {
        temp=a[i];
        a[i]=a[9-i];
        a[9-i]=temp;
    }
    for(i=0;i<10;i++)
    printf("%d\n",a[i]);

    return 0;
}