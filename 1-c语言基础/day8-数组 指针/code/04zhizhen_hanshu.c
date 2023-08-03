#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//逆序操作
char *change(char *p)
{
	int len = strlen(p); //5

	static char a[10] = {0};  //静态局部变量-----延长生命周期,让数组a在main函数中也有效
	
	int i;
	for(i=0; i<len; i++)
	{
		a[i] = *(p+len-1-i);
	}

	a[len] = '\0';

	return a;
}

int main(int argc, const char *argv[])
{
	char buf[10] = {'a', 'b', 'c','d','e','\0'};

	char *a =  change(buf); //地址传参

	puts(buf);
	puts(a);

	return 0;
}
