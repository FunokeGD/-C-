#include <stdio.h>
int main() {
    char c;
    printf("请输入一个字符: ");
    c = getchar(); 
    printf("%d\n",c);
    putchar(c); 
    putchar('\n'); 
    return 0;
}