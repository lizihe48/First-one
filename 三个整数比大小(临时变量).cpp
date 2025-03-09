//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include <stdio.h>

int main9()
{
    int x, y, z, nb;
    printf("\n请输入三个数字:\n");
    scanf_s("%d%d%d", &x, &y, &z);

    //因为输出是按照x,y,z的顺序输出的
    //所以定义一个临时变量(nb)。
    //通过if语句将较大的值赋予x
    if (x > y) {
        /*交换x,y的值*/
        nb = x; x = y; y = nb;
    }

    if (x > z) {
        /*交换x,z的值*/
        nb = z; z = x; x = nb;
    }

    if (y > z) {
        /*交换z,y的值*/
        nb = y; y = z; z = nb;
    }

    printf("从小到大排序: %d %d %d\n", x, y, z);
    return 0;
}