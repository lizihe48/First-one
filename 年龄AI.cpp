#include <stdio.h>

int main1() {
    int birthYear, birthMonth, birthDay;
    int currentYear = 2025, currentMonth = 3, currentDay = 7;
    int age;

    printf("�������������������\n");
    scanf_s("%d%d%d", &birthYear, &birthMonth, &birthDay);

	age = currentYear - birthYear;//��ǰ���-�������

    if (birthMonth > currentMonth || (birthMonth == currentMonth && birthDay > currentDay)) {
		//����>��ǰ���� ���� �����·�==��ǰ�·� ���� ��������>��ǰ����
        age--;
    }

    if (birthMonth == currentMonth && birthDay == currentDay) {
		//�����·�==��ǰ�·� ���� ��������==��ǰ����
        printf("���տ��֣�����\n");
    }

    printf("������%d����\n", age);

    return 0;
}