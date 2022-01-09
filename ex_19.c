#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("Enter an even number:");
    scanf("%d",&a);
    for(b=3;b<a/2;b+=2)
    {
        for(c=2;c<=b-1;c++)
            if(b%c==0)
                break;
            if(c>b-1)
                d=a-b;
            else
                break;
            for(c=2;c<=d-1;c++)
                if(d%c==0)
                    break;
                if(c>d-1)
                    printf("%d=%d+%d\n",a,b,d);

    }
    return 0;
}