#include <stdio.h>


void main()

{
    int y,py;
    int number;
    int N=1,max=-999999;
    scanf("%d",&y);
    while(1)
    {
        scanf("%d",&py);
        if(py==0)
        {
            break;

        }else if(py==y)
        {
            N+=1;
        }
        if(py!=y)
        { 
            py=y;
        } 
            if(N>max)
           {
              max = N;
              number = y;
              N = 1;
           }
        
        

    }
    printf("%d\n",max);
    printf("%d\n",number);


}
