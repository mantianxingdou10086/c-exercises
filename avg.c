#include <stdio.h>

double average(double s[], int n) {
    double sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += s[i];
    }
    return sum / n;
}

int count(double s[], int n, double avg) {
    int num = 0, i;
    for (i = 0; i < n; i++) {
        if (s[i] > avg) num++;
    }
    return num;
}

int main(void) {
    double scores[40];
    int n = 0;
    double x;
    printf("请输入分数（不超过40人）:\n");
    while (n < 40) {
        scanf("%lf", &x);
        if (x < 0) break;
        scores[n] = x;
        n++;
    }
    if (n == 0) {
        printf("没有分数输入.\n");
        return 0;
    }
    double avg = average(scores, n);
    int num = count(scores, n, avg);
    printf("平均分是: %.2f\n", avg);
    printf("平均分以上的人数为: %d\n", num);
    return 0;
}
