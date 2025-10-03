#include<stdio.h>
#include<stdint.h>

int main()

{
    /* to check number of set bits in a number*/
    /* this algorithm finds number of bits in O(k) run time, where 'k' is number of bits */

    uint8_t n = 45;
    uint8_t count=0;

    while (n)
    {
        n=(n & (n-1));
        count++;
    }
    
    printf("Number of set bits are %d ", count);

}