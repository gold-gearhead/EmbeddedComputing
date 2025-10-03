#include<stdio.h>
#include<stdint.h>

int main()

{
    uint8_t N=16;
    uint8_t max_count=0;
    
    while (N) 
    {
        N = (N & (N << 1)); // This removes the rightmost zero in consecutive 1s
        max_count++;
    }

    printf("max number of consecutive set bits are %d",max_count);

}