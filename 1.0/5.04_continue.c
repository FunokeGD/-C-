#include<stdio.h>
int main()
{
    int i = 1, j = 1;
    while (i <= 3) { // 外层循环：当i小于或等于3时执行
        if (i == 3) {
            printf("Yes%d\n", i);
            i++;
            continue; // 跳过当前外层while循环的剩余部分，直接开始下一次迭代（如果有的话）
        }
        while (j <= 3) { // 内层循环
            printf("%d\n", j);
            j++;
        }
        j = 1; // 重置j为1，为下一次外层循环的内层循环做准备
        printf("No%d\n", i);
        i++;
    }
    return 0; // 程序正常结束
}