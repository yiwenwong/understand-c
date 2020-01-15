#include <stdio.h>

int main(void) {
    int a;
    printf("显示多少个*：");
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        printf("*");

        if ((i + 1) % 5 == 0) { printf("\n"); }
    }

    printf("\n");
    return 0;
}