#include <stdio.h>

int main() {
    int birthYear, birthMonth, birthDay;
    int currentYear = 2025, currentMonth = 3, currentDay = 7;
    int age;

    printf("�������������������\n");
    scanf_s("%d%d%d", &birthYear, &birthMonth, &birthDay);

    age = currentYear - birthYear;

    if (birthMonth > currentMonth || (birthMonth == currentMonth && birthDay > currentDay)) {
        age--;
    }

    if (birthMonth == currentMonth && birthDay == currentDay) {
        printf("���տ��֣�����\n");
    }

    printf("������%d����\n", age);

    return 0;
}