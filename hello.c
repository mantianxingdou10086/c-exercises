#include <stdio.h>

int main(void)
{
    printf("你好，C 语言！\n");
    printf("这是我的第一个 C 程序，中文没有乱码。\n");

    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("1 加到 100 等于 %d\n", sum);

    return 0;
}
