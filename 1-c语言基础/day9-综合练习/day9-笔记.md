# 复习

```c

数组指针：本质上是一个指针，只不过指向数组

和二维有关，又称作行指针

int a[][4] = {1,2,3,4,5,6,7,8};

//int (*p)[列数]；

int (*p)[4] = a;

*(*(a+i)+j)
*(*(p+i)+j)

a++; //不行


指针数组：本质上是一个数组，只不过保存的是地址

char buf[5][10] = {"hello", "world", "xxx", "uuuu", "ddddddd"};

//char *p[行数]
char *p[5] = {buf[0], buf[1],buf[2], buf[3],buf[4]}

buf[j] = buf[j+1]; //不行 地址常量不能作左值
p[j] = p[j+1]; //可以的

for(int i=0; i<5; i++)
{
	printf("%s ", p[i]);
}

	函数传参：
	char *p[5];
	
	xxx(p);
	
	void xxx( char *p[] == char **p  等价的)
	{
		//%s	p[0]   hello 
	
	}
	
	


指针函数：本质上是一个函数，只不过返回值是指针类型

char buf[10] = "hello";

char *fun(char *p)
{
	
	return 地址;
}

int n = 100;
fun1((void *)&n);

char str[100] = "world";
char *q = fun1((void *)str);
printf("%s\n", q); //world

void *fun1(void *arg)
{
	//int m = *(int *)arg; //100
	
	char *p = (char *)arg;
		
	printf("%s\n", p);	//world
	
	return p;
}

int a[10] = {1,2,3,4,5};

fun2(a);

int fun2(int *p)
{
	inf i;
	for(i=0; i<10; i++)
	{
		printf("%d ", p[i]);
	}
	puts("");
}

函数传参： 根据你的数据类型
int  --- int 
float --- float
char --- char 
&b --- char *p
int a[] --- int *p
char buf[] --- char *p

int a[][4] --- int (*p)[4] 数组指针接收的是二维数组的数组名
char buf[][4] --- char (*p)[4]

//传递的是多个字符串的地址，用指针数组来接收
//char *argv[] == char **argv
// ./a.out 111     222
// argv[0] argv[1] argv[2]
int main(int argc, char *argv[])
{

}


//多级指针
int a =10;  
int *p = &a;  //&a = 0x123  p = 0x123 
int **q = &p;  //&p = 0x456 q = 0x456 
int ***k = &q; //&q = 0x789 k = 0x789 

**k = 0x123;



函数指针:本质上是一个指针，只不过指向一个函数的入口地址（函数名）

int Max(int a, int b)
{
	return a>b?a:b;
}

//函数返回值 (*p)(函数的参数)

int (*p)(int,int) = Max;

Max(1,2);
p(1,2);
函数名能做的的事，函数指针也能做到

#define N 2

typedef int data_t; //重命名

typedef int (*XXX)(int,int);
XXX p; //定义了一个函数指针




函数指针数组：本质上是一个数组，只不过保存的是函数指针


//函数的返回值 (*p[])(函数的参数)

int (*p1)(int,int) = add;
int (*p2)(int,int) = sub;
int (*p3)(int,int) = xxx;
int (*p4)(int,int) = yyy;

int (*p[4])(int,int) = {p1,p2,p3,p4};




    




```

