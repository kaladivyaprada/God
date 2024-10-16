#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct point{
    int x;
    int y;
    }p1,p2;
    struct line{
    struct point p1;
    struct point p2;
    }l;
    printf("enter the first point\n");
    scanf("%d%d",&l.p1.x,&l.p1.y);
    printf("enter the second point\n");
    scanf("%d%d",&l.p2.x,&l.p2.y);
    if(l.p1.x==l.p2.x){
    printf("horizontal line");
    }
    else if(l.p1.y==l.p2.y){
    printf("vertical line");
    }
    else{
        printf("oblique line");
    }
    return 0;
}


