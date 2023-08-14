/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：12_fputs.c
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

	char buf[32] = "hello";

	int ret = fputs(buf, stdout);

	printf("ret = %d\n", ret);

	return 0;
}
