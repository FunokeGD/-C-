#include <stdio.h>

int main() {
    char a[12];  // 增加一位以存放字符串结尾符 '\0'

    printf("请输入手机号（共11位，不包括分隔符）:\n");

    for (int i = 0; i < 11; i++) {
        int ch = getchar();  // 读取字符

        if (ch == '\n') {
            break;  // 如果已经读取到换行符，则跳出循环
        }

        a[i] = (char)ch;  // 进行类型转换
    }
    
    a[11] = '\0';  // 结尾符，确保字符串正确结束

    printf("手机号是: %s\n", a);  // 直接打印字符串
    return 0;
}