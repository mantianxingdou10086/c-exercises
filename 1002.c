#include <stdio.h>
int leap(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}
int days_in_month(int year, int month)
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && leap(year))
        return 29;
    return days[month - 1];
}
long days_since_epoch(int y, int m, int d)
{
    long total = (long)(y - 1) * 365 + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
    int i;
    for (i = 1; i < m; i++)
        total += days_in_month(y, i);
    total += d - 1;
    return total;
}
int main(void)
{
    int year, month, day;
    if (scanf("%4d-%2d-%2d", &year, &month, &day) != 3)
    {
        printf("Invalid input");
        return 0;
    }
    if (year < 1 || month < 1 || month > 12 ||
        day < 1 || day > days_in_month(year, month))
    {
        printf("Invalid input");
        return 0;
    }
    long diff = days_since_epoch(year, month, day) - days_since_epoch(1990, 1, 1);
    long r = ((diff % 5) + 5) % 5;
    if (r < 3)
        printf("working");
    else
        printf("rest");
    return 0;
}
