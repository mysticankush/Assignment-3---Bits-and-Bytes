/*  Program for conditional
 * Compilation : gcc problem6.c
 * Execution : ./a.out
 * Ankush Chhabra 1910990144 16-08-2021
 * Assignment_3 -> Bits and Bytes
*/
#include <stdio.h>

int conditional(int x,int y,int z)
{
    //if x is 0 then do AND of 1111..11 with ( y ^ z ) and it will generate all the set bits in both y and z then do xor with z to get all set bits of only y and not of z
    // if x is 1 then do AND of 10000.000 with ( y ^ z ) and it will generate all zeroes like 000...000 then do xor of z with them and get z
    return z ^ ((y ^ z) & ((!x) + ~0));
}

int main()
{
    int x;
    //Taking input of x  
    scanf("%d", &x);
    int y;
    //Taking input of y
    scanf("%d",&y);
    int z;
    //Taking input of z
    scanf("%d",&z);
    printf("%d",conditional(x,y,z));
    return 0;
}
