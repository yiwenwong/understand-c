#include <stdio.h>
int main()
{
    double height,weight;
	scanf("请输入您的身高：%d",&height);
    weight=(height-100)*0.9;
    printf("您的标准体重是%.1f",weight);
    return 0;
}