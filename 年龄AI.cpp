#include <stdio.h>

int main1() {
    int birthYear, birthMonth, birthDay;
    int currentYear = 2025, currentMonth = 3, currentDay = 7;
    int age;

    printf("请依次输入出生年月日\n");
    scanf_s("%d%d%d", &birthYear, &birthMonth, &birthDay);

	age = currentYear - birthYear;//当前年份-出生年份

    if (birthMonth > currentMonth || (birthMonth == currentMonth && birthDay > currentDay)) {
		//生日>当前日期 或者 生日月份==当前月份 而且 生日日期>当前日期
        age--;
    }

    if (birthMonth == currentMonth && birthDay == currentDay) {
		//生日月份==当前月份 而且 生日日期==当前日期
        printf("生日快乐！！！\n");
    }

    printf("您今年%d岁了\n", age);

    return 0;
}