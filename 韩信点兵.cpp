/*
#include<stdio.h>
int main()
{
	int a;
	a % 3 == 1;
	a % 5 == 2;
	a % 7 == 4;
	a % 13 == 6;
	a < 60000;
	a > 50000;
	printf("%d", a);	
	return 0;
}
*/
#include<stdio.h>
int main6()
{
	int a;

	for (a = 50001; a < 60000; a++)//使用一个循环从 50001 开始遍历到 60000。 
	{
		if (a % 3 == 1 && a % 5 == 2 && a % 7 == 4 && a % 13 == 6)//在循环中，检查 a 是否满足所有给定的条件
		{
			break;//如果找到满足条件的 a，则跳出循环。
		}
	}
	printf("%d", a);

	return 0;
}
/*
1.初始化变量 a，并使用一个循环从 50001 开始遍历到 60000。
2.在循环中，检查 a 是否满足所有给定的条件：a % 3 == 1，a % 5 == 2，a % 7 == 4 和 a % 13 == 6。
3.如果找到满足条件的 a，则跳出循环。
4.打印找到的 a 的值。
这样可以确保变量 a 在使用前已经被正确初始化并赋值。
*/