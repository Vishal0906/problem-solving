/*
Write a program to calculate the total salary of a person.
The user has to enter the basic salary (an integer) and the grade (an uppercase character),
and depending upon which the total salary is calculated as -
totalSalary = basic + hra + da + allow – pf.
where : hra = 20% of basic,
da = 50% of basic,
allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C'
or any other character, pf = 11% of basic. Round off the total salary and then print the integral part only.
*/

#include<stdio.h>

int main(){
    float basic,pf, hra, da, allow, totalsalary;
    char grade;
    printf("Enter the basic");
    scanf("%f" , & basic);
    printf("Enter the grade");
    scanf("%s" , &grade);
    if (grade == 'A'){
            allow = 1700;
        }else if(grade == 'B'){
            allow = 1500;
            }else {
                allow = 1300;
                }

    hra = basic * 0.20;
    da = basic * 0.50;
    pf = basic * 0.11;
    totalsalary = hra + da+ pf+basic+allow;
    printf("the total salary will be %f" , totalsalary);

}




