#include <stdio.h>
int main() {
    int sum = 0;
    for(int i = 1; i <= 10; i++) {
        sum += i; 
    }
    printf("从1到10的整数和为: %d\n", sum); 
    return 0;
}