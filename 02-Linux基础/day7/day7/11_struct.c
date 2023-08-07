/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
 *   文件名称：11_struct.c
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

struct STU{
	char name[32];
	int id;
	float score;
	char sex;
}stu1 = {"xiaohong", 2, 87, 'G'}, stu2;

void disPlay(struct STU stu)
{
	printf("name: %s\n", stu.name);
	printf("id: %d\n", stu.id);
	printf("score: %.2f\n", stu.score);
	printf("sex: %c\n", stu.sex);
}

int main()
{
	/*

	   struct STU stu3 = {"xiaoming", 1, 97, 'B'};
	   stu2 = (struct STU){"xiaofang", 3, 100, 'G'};
	   struct STU stu4 = {
	   .name = "小张",
	   .score= 70
	   };
	   struct STU stu5 = stu3;

	   disPlay(stu3);
	   disPlay(stu1);
	   disPlay(stu2);

	   disPlay(stu4);
	   disPlay(stu5);
	   */
	struct  STU stu[3] = {
		{"小明", 1, 90, 'B'},
		{"小红",2,  83, 'B'},
		{
			.name = "小芳",
			.sex = 'G'
		}
	};

	struct STU stu1[3] = {
		[0]={"小明", 1, 90, 'B'},
		[2]={"小红", 2, 83, 'B'}
	};

	disPlay(stu1[0]);
	disPlay(stu1[1]);
	disPlay(stu1[2]);

	return 0;
}
