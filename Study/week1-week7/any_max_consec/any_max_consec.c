#include <stdio.h>


void main()
{
    int y,x,number;
    int N=0,max=-99999999999;
    scanf("%d",&x);
    while(1)
    {
        scanf("%d",&y);
        if(y==0)
        {
            break;
        }
        if(x==y)
        {
            N+=1;
        }
        else
        {
            x = y;
        }
        if(N>=max)
        {
            max = N;
            number = x;
        }


    }
    printf("%d\n",max);
    printf("%d\n",number);

// this is code not finish yet.

}
