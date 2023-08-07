/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：01_darr.c
*   创 建 者：JiangCX
*   创建日期：2023年08月08日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
	char str[5][32] = {"hello", "world", "apple", "peach", "pear"};
	
	char (*p)[32] = str;

	int c = sizeof(str) / sizeof(p[0]);

	//printf("len = %d\n", c);
	int i = 0, j = 0;
	/*for(; i < c; i++){
		puts(p[i]);
	}*/

	for(i = 0; i < c; i++){
		for(j = 0; p[i][j] != '\0'; j++){
			putchar(p[i][j]);
		}
		puts("");
	}

	printf("----------------------------\n");
	
	//char *parr[5] = {str[0], str[1], str[2], str[3], str[4]};
	char *parr[5] = {NULL};
	for(i = 0; i < c; i++){
		parr[i] = str[i];
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; *(*(parr + i) + j) != '\0'; j++){
			putchar(parr[i][j]);
		}
		puts("");
	}
	
	printf("----------------------------\n");
	
	char **q = parr;
	for(i = 0; i < 5; i++){
		for(j = 0; *(*(q + i) + j) != '\0'; j++){
			putchar(q[i][j]);
		}
		puts("");
	}

	parr[0] = "12345"; // 相当于将一个字符串常量的首地址赋值给一个指针变量，这个字符串只能读不能改

	printf("%c\n", *(parr[0] + 2));
	/**(parr[0] + 2) = 8; // error!!!!!
	printf("%c\n", *(parr[0] + 2));*/

	return 0;
}
