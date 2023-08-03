#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nums(int *p)
{
	int maxcon = 0, count = 0;
	int i,j;
	int num = p[0];
	for(i=0; i<10; i++){
		count =0;
		for(j = 0; j<10; j++){
				if(p[i] == p[j])
					count++;
		}
		if(count>maxcon)
		{
			maxcon = count;
			num = p[i];
			
		}
	}
	printf("%d most %d ci\n", num, maxcon);

}
	

int main(int argc, const char *argv[])
{
	int a[10] = {0},i;
	for(i = 0; i<10; i++){
		scanf("%d",&a[i]);
	}
	nums(a);
	return 0;
}
