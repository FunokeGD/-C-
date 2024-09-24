#include <stdio.h>
int main() {
    char str[101]; 
    printf("请输入一些文本（最多100个字符）：");
    fgets(str, sizeof(str), stdin); 
    puts(str);
    return 0;
}