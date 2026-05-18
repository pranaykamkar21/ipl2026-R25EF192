#include <stdio.h>
void printbits(int n);
void countno1bits(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printbits(n);
    countno1bits(n);
    return 0;
}
void printbits(int n)
{
    int i;
    printf("Bits of %d: ", n);
    for(i=31; i>=0; i--)
    {
        printf("%d", (n>>i)&1);
    }
    printf("\n");
}
void countno1bits(int n)
{
    int count=0;
    while(n)
    {
        count += n & 1;
        n >>= 1;
    }
    printf("Number of set bits: %d\n", count);
}