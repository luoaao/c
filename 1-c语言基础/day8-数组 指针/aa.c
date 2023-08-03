#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void SStr(char* str, int len) {
    if (len == 0) {
        return;
    }

    char a[len];
    int b = 0;
  
    int count = 1;
    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            // 将字符及其重复次数追加到压缩字符串
            a[b++] = str[i - 1];
            char countChar[10];
            sprintf(countChar, "%d", count);//使用 sprintf(countChar, "%d", count); 将整数 count 格式化为字符串，并将结果存储到 countChar 字符数组中。
            int countLen = strlen(countChar);
            for (int j = 0; j < countLen; j++) {
                a[b++] = countChar[j];
            }
            count = 1;
        }
    }
		printf("%s\n",a);

	int len1 = strlen(a);
	char sst[100];
    int m = 0;
    int con = 0;
	int index = 0;
	while(m<len1){
		char ch = a[m++];
		int  con = a[m++]-'0';
		while(con>0){
			sst[index++] = ch;
			con--;
		}
	}
sst[index] = '\0';
printf("%s",sst);
}  
int main(int argc, const char *argv[])
{
	char str[] = "aaaabbbbeeeee";
    int len = strlen(str);
    SStr(str, len);
    return 0;
}
