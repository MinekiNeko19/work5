#include <stdio.h>

char c;
int i;
long l;

// char *cp = &c;
// int *ip = &p;
// long *lp = &l;


int main() {
    printf("address of c hex: %p \t address of c dec: %lu\n", &c, &c);
    printf("address of i hex: %p \t address of i dec: %lu\n", &i, &i);
    printf("address of l hex: %p \t address of l dec: %lu\n", &l, &l);
    return 0;
}