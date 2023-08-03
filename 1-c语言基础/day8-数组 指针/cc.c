#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rm(char *str){
    int len = strlen(str);
    int a= 0;

    for(int i = 0; i< len; i++){
        int j;
        for( j = 0; j<i; j++){
            if(str[i] == str[j])
            break;
        }
        if(j==i){
            str[a++] = str[i];
        }

    }
    str[a] = '\0';
}

int main(int argc, const char *argv[])
{
	char str[] = "aabbaddfef";
    printf("原字符串：%s\n", str);

    rm(str);
    printf("删除重复字符后的字符串：%s\n", str);

	return 0;
}
