#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SStr(char str[], char da[], char xiao[]){
	int len = strlen(str);
	int a= 0, b=0;
	for(int i=0; i<len; i++){
		if(str[i]<'a'){
			da[a++] = str[i];
		}else{
			xiao[b++] = str[i];
		}
	}
	da[a]='\0';
	xiao[b]='\0';
}

int main(int argc, const char *argv[])
{
	char str[100];
	char dastr[100] = "";
	char xiaostr[100]  = "";

	printf("please input:");
	scanf("%s",str);

	SStr(str, dastr,xiaostr);
	printf("%s\n",dastr);
	printf("%s\n",xiaostr);

	return 0;
}
