#include <stdio.h>

int main(void) {
    int n, , i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    puts("请输入一个整数：");
    scanf("%d", &n);

    for (i = 0; i < n; i++)

    {
        printf("%d", a[i]);
        if(i=9)i=-1;
    }

    return 0;
}