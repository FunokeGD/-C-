#include<stdio.h>
int main()
{
        int a=0,b=1,c=2,d;
        d=a,b,c++;
        printf("%d\n",d);
        d=(a,b,c++);
        printf("%d和%d\n",d,c);
        return 0;
}