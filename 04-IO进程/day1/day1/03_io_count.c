/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：03_io_count.c
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
	printf("hello world\n");
	//printf("%ld\n", stdout->_IO_buf_end - stdout->_IO_buf_base);
	printf("%ld\n", stdout->_IO_buf_end - stdout->_IO_buf_base);

	return 0;
}
