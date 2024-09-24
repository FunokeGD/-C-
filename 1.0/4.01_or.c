#include <stdio.h>
int main() {
    int num1, num2;
    printf("请输入两个整数（用空格分隔）：");
    scanf("%d %d", &num1, &num2);
    // 使用逻辑或（||）操作符检查至少有一个数是否为正数
    if (num1 > 0 || num2 > 0) {
        printf("至少有一个数是正数。\n");
    } else {
        printf("两个数都不是正数。\n");
    }
    return 0;
}