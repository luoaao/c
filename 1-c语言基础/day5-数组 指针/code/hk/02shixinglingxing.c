#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//正三角形
	for(int i=0; i< 5; i++)
	{
		//空格
		for(int j=0; j<5-i; j++)
		{
			putchar(' ');
		}
		
		//*
		for(int j=0; j<=i; j++)
		{
			printf(" *");
		}

		putchar('\n');
	}

	//倒三角形
	for(int i=1; i< 5; i++)
	{
		//空格
		for(int j=0; j<=i; j++)
		{
			printf(" ");
		}

		//*
		for(int j=0; j<5-i; j++)
		{
			printf(" *");
		}

		putchar('\n');
	}
	return 0;
}
