#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int g,s,b,n,i=0;

	for(g=1; g<=4; g++)
	{

		for(s=1; s<=4; s++)
		{
			if(g != s)
			{
				for(b=1; b<=4; b++)
				{
					if(b!=g && b!=s)
					{
						n = g+s*10+b*100;
						i++;
						printf("%d ",n);
					}
				}
			}	

		}
	}

	printf("i=%d\n", i);

	return 0;
}
