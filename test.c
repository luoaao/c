#include <stdio.h>

int main() {
    char str[] = "abc\0def\0ghi";
        char* p = str;
            printf("%s", p+5);

                return 0;
                }