#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chrs(char* chr) {
    int n = strlen(chr);
    
    // 倒转整个句子
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        char temp = chr[i];
        chr[i] = chr[j];
        chr[j] = temp;
    }
    
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (chr[i] == ' ' || chr[i] == '\0') {
            // 倒转每个单词
            for (int p = start, q = i - 1; p < q; p++, q--) {
                char temp = chr[p];
                chr[p] = chr[q];
                chr[q] = temp;
            }
            
            start = i + 1;
        }
    }
}

int main(int argc, const char *argv[])
{
	char chr[] = "I love you !";
    printf("原句：%s\n", chr);
    
    chrs(chr);
    printf("倒序后的句子：%s\n", chr);
	return 0;
}
