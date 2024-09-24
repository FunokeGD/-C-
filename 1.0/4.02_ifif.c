#include <stdio.h>
int main() {
    int a, b;
    printf("请输入两个整数（用空格分隔）：");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("a大于b。\n");
        if (a > 10) {
            printf("并且a大于10。\n");
        }
    } else {
        printf("a不大于b。\n");
    }
    return 0;
}