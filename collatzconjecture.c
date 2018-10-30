#include<stdio.h>
int collatz(int  n)
{
    int k=1;
    if(n==1)
        return 0;
    else if(n%2==0)
        return (k+collatz(n/2));
    else if(n%2==1)
        return (k+collatz(3*n+1));
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d" ,collatz(n));
    return 0;
}
