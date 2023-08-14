/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：09_fgetc_fputc_cp.c
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

//argc 表示命令行输入的参数的个数
//argv 是一个指针数组，存放命令行输入的每个参数
//eg:
//  111 222 333 
//  argv[0] == 111
//  argv[1] == 222
//  argv[3] == 333
// ./a.out 1.jpg 2.jpg   //argv[0] == ./a.out argv[1] == 1.jpg  argv[2] == 2.jpg

int main(int argc, char *argv[])
{
	// ./a.out srcfile destfile
	if(argc != 3){
		printf("please enter %s srcfile destfile\n", argv[0]);
		return -1;
	}

	FILE *fp_src = fopen(argv[1], "r"); //打开要复制的源文件
	if(fp_src == NULL){
		perror("fopen");
		return -1;
	}
	
	FILE *fp_dest = fopen(argv[2], "w");//创建一个目标文件
	if(fp_dest == NULL){
		perror("fopen");
		return -1;
	}
	int ret;   
	while(EOF != (ret = fgetc(fp_src))){ //循环读写，读一个字符写一个字符
		fputc(ret, fp_dest);
	}
	
	fclose(fp_src);
	fclose(fp_dest);

	return 0;
}
