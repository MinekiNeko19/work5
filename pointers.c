#include <stdio.h>

// initialized variables
char c = 'c';
int i = 50;
long l = 1234567890;

// initialized pointers
char *cp = &c;
int *ip = &i;
long *lp = &l;


int main() {
    printf("address of c hex: %p \t dec: %lu\n", &c, &c);
    printf("address of i hex: %p \t dec: %lu\n", &i, &i);
    printf("address of l hex: %p \t dec: %lu\n\n", &l, &l);
    // the addresses are each 4 bits away from each other
    
    printf("value of c's pointer hex: %p \t dec: %lu\n", cp,cp);
    printf("value of i's pointer hex: %p \t dec: %lu\n", ip,ip);
    printf("value of l's pointer hex: %p \t dec: %lu\n\n", lp,lp);

    printf("original value of c: %c\n", c);
    printf("original value of i: %d\n", i);
    printf("original value of l: %ld\n", l);
    *cp = 'n';
    *ip = 25;
    *lp = 987654321;
    printf("new value of c: %c\n", c);
    printf("new value of i: %d\n", i);
    printf("new value of l: %ld\n\n", l);

    unsigned int un = 156789023;
    int *u = &un;
    char *n = &un;
    printf("int pointer of unsigned int: %p points to: %d\n",u,un);
    printf("char pointer of unsigned int: %p points to: %d\n\n",n,un);

    printf("unsigned int in hexadecimal: %x\n",un);
    printf("unsigned int in unsigned int: %u\n\n",un);
    
    printf("individual bytes of unsigned int: %d\n",un);
    printf("decimal: %hhu %hhu %hhu %hhu\n",*n,*(n+1),*(n+2),*(n+3));
    printf("hexadecimal: %hhx %hhx %hhx %hhx\n",*n,*(n+1),*(n+2),*(n+3));
    // *variable will get what is stored
    // b/c n is a char pointer adding 1 will move to next byte
    // chars are one byte

    int x;
    for (x = 0; x<4;x++) {
        *(n+x) += 1;
    }
    printf("individual bytes of new unsigned int: %d\n", un);
    printf("decimal: %hhu %hhu %hhu %hhu\n",*n,*(n+1),*(n+2),*(n+3));
    printf("hexadecimal: %hhx %hhx %hhx %hhx\n",*n,*(n+1),*(n+2),*(n+3));

    return 0;
}