/*  Program for return x with n bits and beginning with position p as inverted
 * Compilation : gcc problem8.c
 * Execution : ./a.out
 * Ankush Chhabra 1910990144 16-08-2021
 * Assignment_3 -> Bits and Bytes
*/
#include <stdio.h>

int invert(unsigned x,int p,int n)
{
    // ~(~0 << n) This will set the last n bits to 1 and rest to 0
    //shifting the subarray of 1 to position p and we can do it by left shifting it by ( p + 1 - n ) times 
    //Then after doing xor with x we will get the original number
    return (x ^ (~(~0 << n) << (p + 1 - n)));
}

int main()
{
    int x;
    //Taking input of x  
    scanf("%d", &x);
    int p;
    //Taking input of p  
    scanf("%d", &p);
    int n;
    //Taking input of n
    scanf("%d", &n);
    printf("%u",(unsigned)(invert(x,p,n)));
    return 0;
}
