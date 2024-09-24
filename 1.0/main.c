#include<stdio.h>
#include<string.h>

struct friend{
        char name[100];
        int age;
        char gender[100];
        double height;
};

int main(){
        struct friend a1;
        strcpy(a1.name,"原神玩家");
        a1.age=18;
        strcpy(a1.gender,"下头人");
        a1.height=1.44;
        printf("我朋友的名字：%s\n",a1.name);
        printf("我朋友的年龄：%d\n",a1.age);
        printf("我朋友的性别：%s\n",a1.gender);
        printf("我朋友的身高：%lf\n",a1.height);
        return 0;
}
/*
我朋友的名字：原神玩家
我朋友的年龄：18
我朋友的性别：下头人
我朋友的身高：1.440000
*/