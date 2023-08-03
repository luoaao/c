#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrcmp(const char *p, const char *q)
{
	int len1 = strlen(p);
	int len2 = strlen(q);

	if(len1 == len2)
	{
		while(*p)
		{
			if(*p != *q)
			{
				if(*p > *q)
				{
					printf("字符串不同 1 > 2 \n");
					return *p - *q;
				}
				else if(*p < *q)
				{
					printf("字符串不同 1 < 2 \n");
					return *p - *q;
				}
			}
			else{
				q++;
			}
			p++;
		}
		printf("相同的字符串\n");
		return 0;
	}
	else{

		while(*p)
		{
			if(*p != *q)
			{
				if(*p > *q)
				{
					printf("字符串不同 1 > 2 \n");
					return *p - *q;
				}
				else if(*p < *q)
				{
					printf("字符串不同 1 < 2 \n");
					return *p - *q;
				}
			}
			else{
				q++;
			}
			p++;
		}


	}

}

int main(int argc, const char *argv[])
{
	char buf[100] = {0};
	printf("请输入一个字符串: ");
	scanf("%s", buf);

	char str[100] = {0};
	printf("请输入第二个字符串: ");
	scanf("%s", str);

	int n = mystrcmp(buf, str);

	printf("n=%d\n", n);

	return 0;
}
