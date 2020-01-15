#include <stdio.h>
int main()
{
    double c;
	int a,b;
	scanf("请输入两个整数：%d%d",a,b);
    c=1.0*a/b*100;
    printf("前者是后者的%f%%",c);
    return 0;
}