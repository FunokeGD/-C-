#include<stdio.h>

void a(){
        static int i=1;//使用静态变量，这样i就不会在递归中再次被定义，如果使用auto变量，程序将会无限循环下去
        printf("说了第 %d 句话\n",i);
        i++;
        if (i<=3){
                a();
                //自我调用，进入下一轮执行（也可以调用其他函数，即“递”给其他函数）
        }else{
                return;
                //结束该函数，直接写return;
        }

}
int main()
{
        a();
        return 0;
}