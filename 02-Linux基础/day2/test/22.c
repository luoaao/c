#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int num,sumji = 0,sumou = 0,counji = 0,counou = 0;
	while(1){
		scanf("%d",&num);
		if(num == 0){
			break;
		}
		else if(num %2 ==1){
			sumji+=num;
			counji ++;
		}else if(num %2 == 0){
			sumou+=num;
			counou++;
		}
	}
	printf("%d ge ji shu pinjun %d \n",counji,sumji/counji);
	printf("%d ge ou shu pinjun %d \n",counou,sumou/counou);
	return 0;
}
