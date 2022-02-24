#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{

        int num,msb,count;
        printf("Enter a number");
        scanf("%d",&num);
        msb =1<<(SIZE-1);
        for(i=0;i<SIZE;i++)
        {
                if((num<<i)&msb)
                {
                        break;
                }
                count++;
        }
                printf("Leading zeros are %d",count);
}
~
:
