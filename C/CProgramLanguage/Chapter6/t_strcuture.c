#include <stdio.h>

struct position
{
    int x;
    int y;
};

struct rect
{
    struct position position1;
    struct position position2;
};

void InitRect(struct rect *pp, int, int, int);

int main(){
    struct rect addpp, *pp;
    pp = &addpp;
    InitRect(pp, 4, 5, 2);
    printf("This is : %d\n", pp->position1.x);
    return 0;
}

void InitRect(struct rect *pp, int x, int y, int pointN ){
    pp -> position1.x = x;
}

/* test
