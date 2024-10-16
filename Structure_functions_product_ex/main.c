#include <stdio.h>
#include <stdlib.h>

struct fraction {
    int num;
    int den;
};


void readfraction(struct fraction*);
void printfraction(struct fraction);
struct fraction fractionproduct(struct fraction, struct fraction);

int main() {
    struct fraction f1, f2, f3;

    printf("Enter Numerator and Denominator of first fraction : ");
    readfraction(&f1);

    printf("Enter Numerator and Denominator of second fraction : ");
    readfraction(&f2);

    f3 = fractionproduct(f1, f2);

    printf("The first fraction, f1 = ");
    printfraction(f1);

    printf("The second fraction, f2 = ");
    printfraction(f2);

    printf("Result fraction = ");
    printfraction(f3);

    return 0;
}

void readfraction(struct fraction* f) {

    do {
        scanf("%d%d", &f->num, &f->den);
        if (f->den == 0) {
            printf("Denominator cannot be zero. Please enter again: ");
        }
    } while (f->den == 0);
}

void printfraction(struct fraction f) {
    printf("%d/%d\n", f.num, f.den);
}

struct fraction fractionproduct(struct fraction f1, struct fraction f2) {
    struct fraction f3;
    f3.num = f1.num * f2.num;
    f3.den = f1.den * f2.den;

    return f3;
}
