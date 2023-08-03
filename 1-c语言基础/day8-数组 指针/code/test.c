#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Strcmp(char *s1, char *s2) {
    int i = 0;
    
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0')
            return 0;
        i++;
    }
    return s1[i] - s2[i];
}

int main(int argc, const char *argv[])
{	
	char str1[100];
    char str2[100];
    
    printf("请输入第一个字符串：");
    scanf("%s", str1);
    
    printf("请输入第二个字符串：");
    scanf("%s", str2);
    
    int result = Strcmp(str1, str2);
    
    if (result == 0)
        printf("两个字符串相等\n");
    else if (result < 0)
        printf("第一个字符串小于第二个字符串\n");
    else
        printf("第一个字符串大于第二个字符串\n");
    
    return 0;
}
