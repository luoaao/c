/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：func.c
*   创 建 者：JiangCX
*   创建日期：2023年08月04日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

//不能被其他文件使用
static int var  = 10;

static void func()
{
	printf("---------func-----\n");
}
