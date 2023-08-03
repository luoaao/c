#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isHuiwen(int num) {
    int a = 0;
    
    int b = num; 
    
    while (num != 0) {
        int re = num % 10;  
        a = a * 10 + re;  
        num /= 10;  
    }
    
    if (b == a) {
        return 1;  
    } else {
        return 0;  
    }
}
int main(int argc, const char *argv[])
{
	 int number;
    
    printf("请输入一个整数：");
    scanf("%d", &number);
    
    if (isHuiwen(number)) {
        printf("%d 是回文数字\n", number);
    } else {
        printf("%d 不是回文数字\n", number);
    }
    
    return 0;
}
