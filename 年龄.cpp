#include <stdio.h>
int main1()
{
	int a, b, c, A, B, C, _1, _2, _3;
	printf("�������������������\n");
	scanf_s("%d%d%d", &a, &b, &c);
	A = 2025;
	B = 3;
	C = 7;
	_1 = A - a;
	_2 = B - b;
	_3 = C - c;
	if (b < B)
	{
		printf("������%d����\n",_1);
	}
	else
	{
		if (b > B)
		{
			_1--;
			printf("������%d����\n",_1);
		}
		else
		{
			if (b == B && c > C)
			{
				_1--;
				printf("������%d����\n",_1);
			}
			else
			{
				if (b == B && c == C)
				{
					printf("���տ��֣�����");
					printf("������%d����\n",_1);
				}
			}
		}
	}
	return 0;
}