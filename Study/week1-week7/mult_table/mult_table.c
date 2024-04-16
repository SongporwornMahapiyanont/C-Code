#include <stdio.h>

int main()
{   int input,i=1;
    scanf("%d",&input);
    if(input>=1 && input<=99)
    {
        if(input*i<100)
        {
            for(i=1;i<=12;i+=1)
            {
            printf("%d x %2d = %3d\n",input,i,input*i);
            }
        }
        else if(input*i<1000)
        {
            for(i=1;i<=12;i+=1)
            {
            printf("%d x %2d = %4d\n",input,i,input*i);
            }
        }
        else if(input*i<10000)
        {
            for(i=1;i<=12;i+=1)
            {
            printf("%d x %2d = %5d\n",input,i,input*i);
            }
        }

    }
    else
    {
        printf("Number is out of range");
    }

}
