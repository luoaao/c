#include <stdio.h>

void main()
{
	char str[80],substr[10];

	int i=0,j=0,num=0;
	printf("从键盘输入一字符串");
	gets(str);
	printf("从键盘输入一子串");
	gets(substr);
	
	for(i=0;str[i]!='\0';i++)
	{
		int k=0;
		for(j=i;str[j]== substr[k] && str[j]!='\0';k++,j++)
		{
			// 内层循环 逐个比较字符串中的字符与子串中的字符
			if(substr[k+1]=='\0')
			{
				// 若比较位置达到了子串的末尾，则说明子串在字符串中出现了1次
				num ++;
				break;
			}
		}

	}
	printf("这个字符子串出现了%d 次\n",num);

}


