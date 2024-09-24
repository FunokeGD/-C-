#include<stdio.h>
int main()
{
    goto show; // 跳转到标签show处执行代码，跳过之后的printf语句
    printf("我在这里呀");
    show:
    printf("呵呵");
    return 0;
}