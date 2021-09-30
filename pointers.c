#include <stdio.h>

// initialized variables
char c;
int i;
long l;

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
    printf("value of l's pointer hex: %p \t dec: %lu\n", lp,lp);

    return 0;
}