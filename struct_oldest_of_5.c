#include <stdio.h>
#include <string.h>
struct Date
{
    int year;
    int month;
    int day;
};
struct JobInfo
{
    char college[40];
    char title[20];
    char post[20];
};
enum Sex { male, female };
struct Teacher
{
    char name[20];
    enum Sex sex;
    struct Date birthday;
    struct JobInfo job;
};
int born_earlier(struct Date a, struct Date b)
{
    if (a.year != b.year)
        return a.year < b.year;
    if (a.month != b.month)
        return a.month < b.month;
    return a.day < b.day;
}
int main(void)
{
    struct Teacher t[5];
    char sexstr[10];
    int i, oldest = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%s %s %d %d %d %s %s %s",
              t[i].name, sexstr,
              &t[i].birthday.year, &t[i].birthday.month, &t[i].birthday.day,
              t[i].job.college, t[i].job.title, t[i].job.post);
        t[i].sex = (strcmp(sexstr, "male") == 0) ? male : female;
    }

    for (i = 1; i < 5; i++)
    {
        if (born_earlier(t[i].birthday, t[oldest].birthday))
            oldest = i;
    }

    printf("%s", t[oldest].name);
    return 0;
}