/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：10_struct.c
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
	struct stu{
		char name[32];
		int id;
		char sex;
		float score;
	};

	struct stu stu1;
	/*stu1.name[0] = 'T';
	stu1.name[1] = 'O';
	stu1.name[2] = 'M';
	stu1.name[3] = '\0';*/
	strcpy(stu1.name, "TOM");
	stu1.id = 1;
	stu1.sex = 'G';
	stu1.score = 98.5;
	
	printf("name: %s\n", stu1.name);
	printf("id: %d\n", stu1.id);
	printf("sex: %c\n", stu1.sex);
	printf("score: %.2f\n", stu1.score);

	return 0;
}
