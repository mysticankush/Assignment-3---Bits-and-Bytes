/*  Program to get n byte in word x
 * Compilation : gcc problem4.c
 * Execution : ./a.out
 * Ankush Chhabra 1910990144 16-08-2021
 * Assignment_3 -> Bits and Bytes
*/
#include <stdio.h>

int getbyte(long long int x,long long int n)
{
    int val = 8 * n ;
    //Shift val bits to right and generate the bits which are set in first 8 bits
   return ( ( x >> val ) & 0xFF );
}
int main()
{
    int x;
    //Taking input of a number  
    scanf("%x", &x);
    int n;
    scanf("%d",&n);
    int ans = getbyte(x,n);
    printf("%x",ans);
    
    return 0;
}
