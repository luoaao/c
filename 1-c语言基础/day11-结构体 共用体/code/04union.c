#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union A{
	int a;
	char b;
	short c;
	double d;
}TT;

int main(int argc, const char *argv[])
{
	TT t;  //共用体数据类型 变量名	

	//1.共用体中最大的那个数据类型就是整个共用体的数据类型
	printf("%ld\n", sizeof(t));
	printf("%ld\n", sizeof(TT));

	//2. 改变一个成员的值，其他成员也会改变
	t.a = 97; 

	printf("%d\n", t.a);
	printf("%c\n", t.b);
	printf("%hd\n", t.c);
	//printf("%lf\n", t.d);


	t.b = 'b';
	printf("%d\n", t.a);
	printf("%c\n", t.b);
	printf("%hd\n", t.c);


	return 0;
}
