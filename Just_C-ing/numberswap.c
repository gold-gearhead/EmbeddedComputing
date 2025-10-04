#include<stdio.h>
#include<stdint.h>

int main()
{
    uint8_t a=45;    
    uint8_t b=87;    
    
    printf("before swap is %d and %d \n", a,b);

    /*unsafe way to swap two numbers*/
       /*may lead to undefined behaviour cause of overflow incase of one of the number is Type_MAX */
    /*  a = a + b;   
        b = a - b;   
        a = a - b;   */

    /* below procedure is the safe way*/

    a = a^b;
    b = a^b;
    a = a^b;

    printf("after swap is %d and %d ", a,b);
}