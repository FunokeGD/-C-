#include<stdio.h>

void a(){
        static int i=1;
        printf("%d",i);
        i=i+1;
}
int main()
{
        a();
        a();
        a();
        a();
        a();
        return 0;
}