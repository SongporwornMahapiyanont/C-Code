#include <stdio.h>

void main()
{
    int input,target,amount=1;
    int max=-99999999;
    int maxtarget;

    scanf("%d",&target);
    while(1)
    {
        scanf("%d",&input);
        if(input==0)
        {
            break;
        }
        if(input == target)
        {
            amount+=1;
            if(amount>max)
            {
                max = amount;
                maxtarget = target;
            }
        }
        else
        {
            amount=1;
        }
    }
    printf("%d\n",amount);
    printf("%d",maxtarget);
}





