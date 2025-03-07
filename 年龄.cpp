#include <stdio.h>
int main1()
{
	int a, b, c, A, B, C, _1, _2, _3;
	printf("请依次输入出生年月日\n");
	scanf_s("%d%d%d", &a, &b, &c);
	A = 2025;
	B = 3;
	C = 7;
	_1 = A - a;
	_2 = B - b;
	_3 = C - c;
	if (b < B)
	{
		printf("您今年%d岁了\n",_1);
	}
	else
	{
		if (b > B)
		{
			_1--;
			printf("您今年%d岁了\n",_1);
		}
		else
		{
			if (b == B && c > C)
			{
				_1--;
				printf("您今年%d岁了\n",_1);
			}
			else
			{
				if (b == B && c == C)
				{
					printf("生日快乐！！！");
					printf("您今年%d岁了\n",_1);
				}
			}
		}
	}
	return 0;
}