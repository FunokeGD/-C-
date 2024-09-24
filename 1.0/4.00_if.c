#include <stdio.h>
int main() {
    int score;
    printf("请输入您的分数（0-100）：");
    scanf("%d", &score);
    if (score >= 90) {
        printf("等级：A\n");
    } else if (score >= 80) {
        printf("等级：B\n");
    } else if (score >= 70) {
        printf("等级：C\n");
    } else if (score >= 60) {
        printf("等级：D\n");
    } else {
        printf("等级：F\n");
    }
    return 0;
}