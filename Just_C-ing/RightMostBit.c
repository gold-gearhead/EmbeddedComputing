#include<stdio.h>
#include<stdint.h>

int main()
{
    uint8_t n=25;
    uint8_t RMB=n&-n; // RMB =right most bit (bitwise ANDing)
    uint8_t tRMB=RMB; // tempRMB
    uint8_t position=0;
    
    while(tRMB > 0)
    {
        tRMB=tRMB >> 1;
        position++;
    }

    printf("right most set bit is in position %d \n",position);
}