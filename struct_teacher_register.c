#include <stdio.h>
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