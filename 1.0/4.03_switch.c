#include<stdio.h>
int main()
{
	int a;
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("你输入了最小的正整数");
        break;
        case 2:
        printf("你输入了最小质数");
        break;
        default:
        printf("你输入的既不是1也不是2");
    }
    return 0;
}