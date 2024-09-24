#include<stdio.h>
int main()
{
    int i = 1, j = 1;
    while (i <= 3) { // 外层循环：当i小于或等于3时执行（但实际上由于break，只执行一次）
        while (j <= 3) { // 内层循环
            printf("%d", j);
            j++;
        }
        j = 1;
        i++;
        break; // 跳出外层循环，导致循环只执行一次
    }
    return 0;
}