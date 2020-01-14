#include <stdio.h>
void sumA();
void sumB();
int main()
{
    sumA();
    sumB();
    return 0;
}
void sumA() {
    int i;
    double sum = 0;

    for (i = 1; i <= 1000; i++) {
        sum += i * 1.0 / 10;
    }

    printf("和A为%f\n", sum);
}
void sumB() {
    int i;
    double sum = 0;

    for (i = 1000; i >= 1; i--) {
        sum += i * 1.0 / 10;
    }

    printf("和B为%f\n", sum);
}