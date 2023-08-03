/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：01_hm.c
*   创 建 者：JiangCX
*   创建日期：2023年08月03日
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
	char buf[32] = {0};
	printf(">:\n");
	
	fgets(buf, sizeof(buf), stdin);
	if(buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	
	int len = strlen(buf), i = 0, j = 0;

	for(; i < len-1; i++){
		for(j = len-1; j > i; j--){
			if(buf[i] == buf[j]){
				buf[j] = buf[j+1];
			}
		}
	}

	puts(buf);


	return 0;
}
