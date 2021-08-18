/*  Program to do XOR of two numbers using ~ and & operators
 * Compilation : gcc problem2.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 16-08-2021
 * Assignment_3 -> Bits and Bytes
*/
#include<stdio.h>

int main() {
   int a,b;
   //Taking input of two numbers
   scanf("%d%d",&a,&b);
   // To do Bitwise XOR using ~ and & operators
   int answer = ( ~ ( ( ~ b ) & ( ~ a ) ) & ( ~ ( a & b ) ) );
   printf("%d ",answer);
}
