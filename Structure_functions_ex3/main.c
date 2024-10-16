#include <stdio.h>


struct Point {
    int x;
    int y;
};


void movePoint(struct Point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main() {
    struct Point myPoint = {2, 3};

    printf("Original Point: (%d, %d)\n", myPoint.x, myPoint.y);


    movePoint(&myPoint, 5, -2);

    printf("Moved Point: (%d, %d)\n", myPoint.x, myPoint.y);

    return 0;
}
