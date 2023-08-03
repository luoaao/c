#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//描述学生
typedef struct{
	char name[50];
	int xuehao;
	char ch;
	float height;
	double score;
	char banji[50];
}stu_t;


int main(int argc, const char *argv[])
{
//	struct Student stu; //结构体数据类型 结构体变量

	//初始化
	stu_t stu = {"zhangsan", 1, 'm', 1.83, 99, "230704"};

	//访问结构体的成员
	printf("%s\n", stu.name);
	printf("%d\n", stu.xuehao);
	printf("%c\n", stu.ch);
	printf("%f\n", stu.height);
	printf("%lf\n", stu.score);
	printf("%s\n", stu.banji);


	printf("--------------------\n");

	//结构体指针
	stu_t *p = &stu;

	//访问结构体的成员
	printf("%s\n", p->name);
	printf("%d\n", (*p).xuehao);
	printf("%c\n", p->ch);
	printf("%f\n", p->height);
	printf("%lf\n", p->score);
	printf("%s\n", p->banji);


	return 0;
}
