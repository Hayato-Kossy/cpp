#include<cstdio>

int main() {
    int x, y, z;
    int *p, *q;

    p = &x;
    printf("x: %d\n", x);
    printf("p: %p\n", p);
    *p = 8;
    y = *p + x;
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    q = &z;
    *q = 10;
    printf("z: %d\n", z);
    return 0;
}