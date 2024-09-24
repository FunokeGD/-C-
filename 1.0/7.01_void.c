#include<stdio.h>
#include <stdlib.h>
void process(int a,int b){
        int c=b;
        b=a,a=c;
        printf("状态2：经由调换函数a,b现在是：%d和%d\n",a,b);
}
int main()
{
        int a,b;
        scanf("%d %d",&a,&b);
        printf("状态1：a,b最初是：%d和%d\n",a,b);
        process(a,b);
        printf("状态3：再在主函数中查看a,b现在是：%d和%d\n",a,b);
        system("pause");
        return 0;
}