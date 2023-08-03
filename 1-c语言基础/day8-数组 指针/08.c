#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void dao(char str[]) {
    int len = strlen(str);
    char word[100] = "";
    
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ' || str[i] == '\n') {
            printf("%s ", word);
            strcpy(word, ""); // 清空单词
        } else {
            // 将字符逆序添加到单词字符串中
            char temp[2] = {str[i], '\0'};
            strcat(word, temp);
        }
    }
    
    // 输出最后一个单词
    printf("%s", word);
}
int main(int argc, const char *argv[])
{ 
	char str[100];
    
    printf("请输入一个句子：");
    fgets(str, sizeof(str), stdin);
    
    printf("倒序后的句子：");
    dao(str);
	 
    return 0;

}
