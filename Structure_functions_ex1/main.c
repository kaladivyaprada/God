#include <stdio.h>
#include <stdlib.h>

struct data
{
 int x;
};

int main()
{
    void update(struct data x);
    struct data d={10};
    printf("Before update(), x=%d", d.x);
    update(&d);
    printf("After Update(), x=%d",d.x);
    return 0;
}


void update(struct data x)
{
d->x =d->x+10;
printf("AfterUpdate x=%d",d->x);
}
