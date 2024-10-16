#include <stdio.h>
#include <stdlib.h>

struct fraction
{
    int num;
    int den;
};

int main()
{
    void readfraction(struct fraction*);
    void printfraction(struct fraction);
    struct fraction fractionproduct(struct fraction,struct fraction);

    struct fraction f1, f2, f3;

    printf("Enter Numerator and denominator of first fraction:");
    readfraction(&f1);

    printf("Enter Numerator and denominator of Second fraction:");
    readfraction(&f2);
    f3=fractionproduct(f1,f2);

    printf("\n the first fraction, f1= ");
    printfraction(f1);

    printf("\n the Second fraction, f2= ");
    printfraction(f2);

    printf("Result fraction");
    printfraction(f3);

    return 0;
}


void readfraction(struct fraction*f)
{
    scanf("%d%d", &f->num, &f->den);
}

void printfraction(struct fraction f)
{
    printf("%d%d",f.num,f.den);
}


struct fraction fractionproduct(struct fraction f1, struct fraction f2)
{
    struct fraction f3;
    f3.num=f1.num*f2.num;
    f3.den=f1.den*f2.den;

    return f3;
};










