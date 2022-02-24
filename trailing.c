#include <stdio.h>
# define SIZE sizeof(int)*8
int main()
{
int num,count=0,i;
printf("Enter a number");
scanf("%d",&num);
for(i=0;i<SIZE;i++)
{
    if((num>>i)&1)
    break;
    count=count+1;
}
printf("\nThe trailing zeros are : %d",count);
}



