#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isHui(char str[]) {
    int left = 0;  
    int right = strlen(str) - 1;  
    
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; 
        }
        
        left++;
        right--;
    }
    
    return 1; 
}

int main(int argc, const char *argv[])
{
	char str[100];
    
    printf("请输入一个字符串：");
    scanf("%s", str);
    
    if (isHui(str)) {
        printf("%s 是回文字符串\n", str);
    } else {
        printf("%s 不是回文字符串\n", str);
    }
	return 0;
}
