/*  Program to check sign of number
 * Compilation : gcc problem3.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 16-08-2021
 * Assignment_3 -> Bits and Bytes
*/
#include <stdio.h>

int sign(int n)
{
    return ( ( !!n ) | ( n >> 31 ) );
}
int main()
{
    int n;
    //Taking input of a number
    scanf("%d", &n);
    int answer=sign(n);
    printf("%d",answer);
    return 0;
}
