#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change(char *p){
	while(*p != '\0'){
		if(*p>='A' && *p<= 'z'){
			if(*p >= 'w' && *p <= 'z'){
				*p = *p-22;
			}
			else{
				*p = *p +4;
			}
		}
		p++;
	}
}

void insert(char *p, char *q){
	while(*p != '\0'){
		*q = *p;
		*(q+1) = ' ';
		q += 2;
		 p++;
	}
	*q = '\0';
}

int main(int argc, const char *argv[])
{
	char arr[100];
	printf("input:");
	fgets(arr, 100, stdin);
	int len = strlen(arr);
	arr[len-1] = '\0';
	change(arr);
	char arr1[2*len+1];
	insert(arr, arr1);
	printf("%s\n", arr1);
	return 0;
}
