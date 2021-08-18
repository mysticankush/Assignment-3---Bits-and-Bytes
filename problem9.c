/*  Program to convert base32 encoded string to base64
 * Compilation : gcc problem9.c
 * Execution : ./a.out
 * Ankush Chhabra 1910990144 17-08-2021
 * Assignment_3 -> Bits and Bytes
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#define ll long long int
//Function to calculate pow(a,b)
int custompower(int x,int y)  
{  
    int temp;  
    if(y == 0)  
        return 1;  
    temp = custompower(x, y / 2);  
    if (y % 2 == 0)  
        return temp * temp;  
    else
    {  
        if(y > 0)  
            return x * temp * temp;  
        else
            return (temp * temp) / x;  
    }  
}
//Function to find length of string
int customstrlen(char* s)
{
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    return size;
}
int main() {
    
    int t;
    scanf("%d",&t);
    while(t--){
    // take input of 32 base encoded string
    char s[1000];
    scanf("%s",s);
    // create a string for 64 base
    char ans[66];

    for(int i=0;i<26;i++)
    ans[i]=(char)('A' + i);
    int cnt=0;
    for(int i=26;i<52;i++)
    ans[i]=(char)('a' +  cnt++ );
    cnt=0;
    for(int i=52;i<62;i++)
    ans[i]=(char)('a' + cnt++ );
    
    ans[62]='+';
    ans[63]='/';
    
    // convert 32 base to decimal base.
    ll final=0;
    int val=0;
    for(int i=customstrlen(s)-1;i>=0;i--)
    {
        char l='A',r='Z';
        if(s[i]>=l && s[i]<=r)
        {
            final+=(custompower( 32 , val )) * ( (int)( s[i] - 'A' ) );
        }
        else
        {
            final+=(custompower( 32 , val )) * ( (int)( s[i] - '2' + 26 ) );
        }
        val++;
    }
    char ans2[100];
    int low=0;
    // convert decimal to 64 base
    while(final!=0)
    {
        int rem=final%64;
        ans2[low++]=ans[rem];
        final/=64;
    }
    ans2[low]='\0';
    printf("%s\n",ans2);
    }
	return 0;
}
