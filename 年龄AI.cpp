#include <stdio.h>

int main() {
    int birthYear, birthMonth, birthDay;
    int currentYear = 2025, currentMonth = 3, currentDay = 7;
    int age;

    printf("请依次输入出生年月日\n");
    scanf_s("%d%d%d", &birthYear, &birthMonth, &birthDay);

    age = currentYear - birthYear;

    if (birthMonth > currentMonth || (birthMonth == currentMonth && birthDay > currentDay)) {
        age--;
    }

    if (birthMonth == currentMonth && birthDay == currentDay) {
        printf("生日快乐！！！\n");
    }

    printf("您今年%d岁了\n", age);

    return 0;
}