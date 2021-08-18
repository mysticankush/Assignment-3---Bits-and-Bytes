/*  Program to Logical Shift x to the right by n 
 * Compilation : gcc problem5.c
 * Execution : ./a.out
 * Ankush Chhabra 1910990144 16-08-2021
 * Assignment_3 -> Bits and Bytes
*/
#include <stdio.h>

int logicalShift(long long int x,long long int n)
{
    //First do arithmetic shift by n
    //Mark last (n-1) bits as 0 and rest all as 1 and do AND 
    return (x >> n) & (~(((1 << 31) >> n) << 1));
}

int main()
{
    int x;
    //Taking input of a number  
    scanf("%x", &x);
    int n;
    scanf("%d",&n);
    printf("%x",logicalShift(x,n));
    return 0;
}
