#include<stdio.h>

int process(int a,int b){
//自定义的函数写在主函数的外面
//“int”是函数的返回值类型
//“process”是函数名，由你自己命名
//括号内是参数列表，根据你输入的参数确定
        return a+b;
//通过return返回值（返回，即输出函数最终结果）
}

int main()
{
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",process(a,b));
		//返回一个值的函数，可以当作一个值来处理
        return 0;
}