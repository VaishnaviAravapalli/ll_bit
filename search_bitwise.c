#include <stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE],i,count,n;
    printf("\n Enter the array elements");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element to be searched:");
    scanf("%d",&n);
    for(i=1;i<=SIZE;i++)
    {
        if((a[i] ^ n) == 0)
        {
        
        count=1;
        break;
            
        }
    }
    if(count==1)
    printf("%d is found  in %d position",a[i],i);
    else
    printf("%d is not found",a[i]);
    
}


