#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 10;
	int b = 20;

#if 0
	//第一种：const int *p 或者 int const *p
	int const *p = &a;

	printf("%d\n", *p); //10

	//*p = 100; //error
	
	p = &b; //right

	printf("%d %d\n", *p, b);	

	
	int *q = &a; 

	*q = 1000;

	printf("%d %d\n", *q, a);


	a = 100000;

	printf("%d\n", a);

#endif

#if 0
	//第二种：int *const p 
	
	int * const p = &a;

	*p = 100;  //right

	printf("%d %d\n", a, *p);

	//p = &b;  //error

#endif


#if 1
	//第三种：const int * const p 

	const int * const p = &a;

	//*p = 100; //error

	//p = &b; //error

#endif

#if 0

	//正常情况

	int *p = &a;
	
	printf("%d\n", *p); //10

	*p = 100; //修改指针指向的变量的值 right

	printf("%d %d\n", *p, a); //100 100

	p = &b;   //修改指针的指向，把指针指向变量b right

	printf("%d %d\n", *p, b); //20 20
#endif


	return 0;
}
