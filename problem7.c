/*  Program for Bang
 * Compilation : gcc problem7.c
 * Execution : ./a.out
 * Ankush Chhabra 1910990144 16-08-2021
 * Assignment_3 -> Bits and Bytes
*/
#include <stdio.h>

int bang(int x)
{
    //two's complement of positive and negative numbers are different and after doing OR , the 31sr bit will be 1 and after shifting it by 31 towards right it will be -1 so answer will be -1 + 1 = 0
    ///two's complement of 0 will be same as of the number and after doing OR , the 31st bit will be 0 and after shifting it right by 31 times it will be 0 so answer will be 0 + 1 = 1
    return (((~x + 1) | x) >> 31) + 1;
}

int main()
{
    int x;
    //Taking input of x  
    scanf("%d", &x);
    printf("%d",bang(x));
    return 0;
}
