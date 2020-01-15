#include <stdio.h>

int main(void) {
    int n1, n2，s = 0;
    puts("请输入两个整数。");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);

    for(i=n1;i<=n2;i++)
    {
    	s+=i;
    }
    printf("它们之间数的和是%d\n", s);

    return 0;
}