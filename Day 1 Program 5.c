/*
Check weekday by entering the given date.
*/


#include <stdio.h>

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d)
           % 7;
}


int main()
{
    int date,month,year;
    printf("enter the date in numeric form\n");
    scanf("%d",&date);
    scanf("%d",&month);
    scanf("%d",&year);
    int day = dayofweek(date, month, year);

    printf("%d", day);

    return 0;
}
