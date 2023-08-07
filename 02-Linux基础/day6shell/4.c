#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void paixu(char (*p)[100])
{
	int i,j;
	for(i=0;i<5-1;i++){
		for(j=0;j<5-i-1;j++){
			if(strlen(*(p+j))>strlen(*(p+j+1))){
				char a[100];
					strcpy(a,*(p+j));
					strcpy(*(p+j), *(p+j+1));
					strcpy(*(p+j+1),a);
			}
		}
	}	
}

void Put(char (*p)[100])
{
	char a[6];
	int i;
	for(i=0;i<5;i++){
		if(strlen(*(p+i))<3)
			a[i] = ' ';
		else
			a[i] = *(*(p+i)+2);
	}
	puts(a);
}

int main(int argc, const char *argv[])
{
	char strs[5][100];
	int i;
	for(i=1;i<6;i++){
	printf("please input %d str >:  ",i);
	scanf("%s",strs[i-1]);
	}
	paixu(strs);
	for(i=0;i<5;i++){
		printf("%s\n",strs[i]);
	}
	Put(strs);
	return 0;
}
