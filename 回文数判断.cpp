#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i;
	printf("请输入一个五位数来判断是否为回文数\n");
	scanf_s("%d", &a);//12321
	b = a % 10000;//b=2321
	c = a % 10;//个位  1
	e = a % 1000;//321
	f = a % 100;//21
	d = a - b;//万位  10000
	i = b - e;//千位  2000
	g = e - f;//百位  300
	h = f - c;//十位  20 

	if (a > 9999 && a<100000) {

		if (c * 10000 == d && h * 100 == i && i / 10 + 100 == g) {
			printf("%d是回文数",a);
		}
		else {
			printf("%d不是回文数",a);
		}
	}
	else {
		printf("请输入5位数");
	}
	return 0;
}

/*
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include <stdio.h>
 
int main( )
{
    long ge,shi,qian,wan,x;
    printf("请输入 5 位数字：");
    scanf("%ld",&x);
    wan=x/10000;        //分解出万位
qian = x % 10000 / 1000;  //分解出千位
shi = x % 100 / 10;       //分解出十位
ge = x % 10;            //分解出个位
if (ge == wan && shi == qian) { //个位等于万位并且十位等于千位
	printf("这是回文数\n");
}
else {
	printf("这不是回文数\n");
}
}
*/