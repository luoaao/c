#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a,b;
	while(1){
	printf("\n游戏开始\n请选择出什么：0石头1剪刀2布：");
	scanf("%d",&a);
	if(a<0||a>2){
		printf("输入错误");
		return -1;
	}
	b = rand()%3;//0石头
	if(b==0){
		printf("对方出的是石头 ");
		if(a==0)
		printf("平局");
		if(a==2)
		printf("你赢了");
		if(a==1)
		printf("你输了");
	}
	if(b==1){
		printf("对方出的是剪刀");
		if(a==1)
		printf("平局");
		if(a==0)
		printf("你赢了");
		if(a==2)
		printf("你输了");
	}
	if(b==2){
		printf("对方出的是布 ");
		if(a==2)
		printf("平局");
		if(a==1)
		printf("你赢了");
		if(a==0)
		printf("你输了");
	}
	}
	return 0;
}
