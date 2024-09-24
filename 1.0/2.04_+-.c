#include<stdio.h>
int main()
{
    int a=0,b; 
    a=a+1; 
    printf("%d\n",a); 
    a=0; 
    b=++a; 
    printf("%d和%d\n",a,b); 
    a=0; 
    b=a++;   
    printf("%d和%d\n",a,b); 
    return 0;
}