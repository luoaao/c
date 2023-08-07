/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
 *   文件名称：08_enum.c
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
	enum Week{
		Mon = 1,
		Tue,
		Wed,
		Thu,
		Fri,
		Sat,
		Sun
	};

	printf("%d\n", Mon);
	printf("%d\n", Tue);
	printf("%d\n", Wed);
	printf("%d\n", Thu);

	enum Week day = Sun;
	//enum Week day = 7; // 一般不这样赋值

	printf("day: %d\n", day);
	printf("%ld\n", sizeof(day));
	printf("%ld\n", sizeof(enum Week));

	return 0;
}
