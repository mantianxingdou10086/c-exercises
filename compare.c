#include <stdio.h>
int max(int a, int b)   // 定义函数：返回两整数中的较大值
{
    if (a > b)
        return a;
    else
        return b;
}

int main(void)
{
    int x, y, m;

    printf("请输入两个整数：");
    scanf("%d %d", &x, &y);   // 从键盘读入，中间用空格隔开

    m = max(x, y);            // 调用函数，把结果存进 m

    printf("最大值是：%d\n", m);
    return 0;
}
