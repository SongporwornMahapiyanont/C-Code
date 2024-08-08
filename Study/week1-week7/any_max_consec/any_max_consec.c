#include <stdio.h>


void main()

{
    int y,py;
    int number;
    int N=1,max=-99999999999;
    while(1)
    {
        scanf("%d",&y);
        if(y==0)
        {
            break;

        }else if(py==y)
        {
            N+=1;
        }
        else if(py!=y)
        { 
            py=y;
        } 
        else
        {
            if(N>=max)
           {
              max = N;
              number = y;
           }
           N = 0;
        }

    }
    printf("%d\n",max);
    printf("%d\n",number);


}
