/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：11_fgets.c
*   创 建 者：JiangCX
*   创建日期：2023年08月16日
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
	FILE *fp = fopen("test.txt", "r");
	if(NULL == fp){
		perror("fopen");
		return -1;
	}

	char buf[32];
	fgets(buf, sizeof(buf), fp);

	int i = 0;
	for(; i < 32; i++){
		printf("buf[%d] = %d --> %c\n", i, buf[i], buf[i]);
	}
	fclose(fp);

	return 0;
}
