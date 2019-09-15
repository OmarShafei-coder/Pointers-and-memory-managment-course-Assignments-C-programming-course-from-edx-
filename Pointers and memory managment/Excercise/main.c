#include <stdio.h>
#include "types.h"
#define SIZE 5
u16 maxElement(u16[]);

int main(void)
{
    u16 max;
    u16 a[SIZE] = {1,8,100,65,98};
    
    max = maxElement(a);
    printf("max = %hu\n",max);
    return 0;
}

u16 maxElement(u16 arr[])
{
    u16 i;
    u16 max = 0;
    
    for(i=0; i<SIZE; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }else;
    }
    return max;
}