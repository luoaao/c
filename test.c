#include <stdio.h>
#include <string.h>

void sort_strings(char *strings[], int num_strings) {
    int i, j;

    // 使用冒泡排序对字符串数组进行排序
    for (i = 0; i < num_strings-1; i++) {
        for (j = 0; j < num_strings-i-1; j++) {
            if (strcmp(strings[j], strings[j+1]) > 0) {
                char *temp = strings[j];
                strings[j] = strings[j+1];
                strings[j+1] = temp;
            }
        }
    }
}

int main() {
    // 要排序的字符串
    char *strings[] = {"hello", "world", "ni hao", "chengdu", "good", "huaqing"};
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    // 按从小到大的顺序排序字符串
    sort_strings(strings, num_strings);

    // 输出排序后的结果
    for (int i = 0; i < num_strings; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}