#include<stdio.h>
#include<stdint.h>

int main()

{
    uint8_t N=55;
    uint8_t swapped_N;
    /* this program swap odd and even bit positions of number */

    /* extract odd bits by ANDing with 0x55 */
    /* extract even bits by ANDing with 0xAA */

    uint8_t even_mask = 0xAA;
    uint8_t odd_mask =  0x55;

    swapped_N= (((N & even_mask)>>1) | ((N & odd_mask) << 1));

    printf("Number before bit swap was %d and after bit swap is %d ", N,swapped_N);

}