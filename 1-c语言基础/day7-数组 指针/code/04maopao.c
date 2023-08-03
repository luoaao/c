#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char buf[10] = "sncnsdkcn";

	int len = strlen(buf);

	for(int i = 0; i<len; i++)
	{
		for(int j = 0; j <len-1-i ; j++)  //len-1-i
		{
			if(buf[j] > buf[j+1])
			{
				buf[j] ^= buf[j+1];
				buf[j+1] ^= buf[j];
				buf[j] ^= buf[j+1];
			}
		}

	}

	puts(buf);


	//逆序
	for(int i =0; i<len/2; i++)
	{
		buf[i] ^= buf[len-1-i];
		buf[len-1-i] ^= buf[i];
		buf[i] ^= buf[len-1-i];
	}

	puts(buf);

	return 0;
}
