#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 10;

	printf("%d\n", a); //'\n'可以刷新行缓存

#if 0	
	int b;
	
	printf("请输入一个数字: ");

	scanf("%d", &b); //&:取地址符（取出变量的地址）

	printf("%d\n", b);
#endif

#if 0	
	float b;
	
	printf("请输入一个小数: ");

	scanf("%f", &b); //&:取地址符（取出变量的地址）

	printf("%.2f\n", b);
#endif	

#if 0	
	char b;
	
	printf("请输入一个字符: ");

	scanf("%c", &b); //&:取地址符（取出变量的地址）

	printf("%c\n", b);
#endif	

	int s;
	float m;
	char n;
	
	//printf("请输入一个数字: ");

	//把空格或者回车符当作了你要输入的数据
	//1. 加空格
	//2. 加抑制符 %*c
	scanf("%d%f %c", &s, &m, &n); //&:取地址符（取出变量的地址）

	printf("s = %d m = %f n = %c\n", s, m, n);

	return 0;
}
