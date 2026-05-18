#include <stdio.h>
typedef struct{
    unsigned int firstbit:1;
    unsigned int nextbits:3;
    unsigned int remainingbits:4;
}Bitfield;
int main(){
    Bitfield a;

    a.firstbit=1;
    a.nextbits=5;
    a.remainingbits=12;

    printf("test for bitfields\n");
    printf("a.firstbit: %u\n", a.firstbit);
    printf("a.nextbits: %u\n", a.nextbits);
    printf("a.remainingbits: %u\n", a.remainingbits);

    printf("Size of structure : %zu byte(s)\n",sizeof(a));

    return 0;
}