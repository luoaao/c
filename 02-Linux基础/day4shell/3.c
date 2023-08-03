#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len;

void fenleipaixu(int arr[], int len, int resu[][len])
{
	int indexji=0,indexou=0;
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<len;j++){
			resu[i][j]=-1;
		}
	}
	for(i=0;i<len;i++){
		if(arr[i]%2==0)
			resu[0][indexou++]=arr[i];
		else
			resu[1][indexji++]=arr[i];
	}

	for(i=0;i<indexou-1;i++){
		for(j=0;j<indexou-i-1;j++){
			if(resu[0][j]<resu[0][j+1])
			{
				resu[0][j]^=resu[0][j+1];
				resu[0][j+1]^=resu[0][j];
				resu[0][j]^=resu[0][j+1];
			}
		}
	}
	for(i=0;i<indexou;i++){
		printf("%d ",resu[0][i]);
	}
	puts("");
	for(i=0;i<indexji-1;i++){
		for(j=0;j<indexji-i-1;j++){
			if(resu[1][j]<resu[1][j+1])
			{
				resu[1][j]^=resu[1][j+1];
				resu[1][j+1]^=resu[1][j];
				resu[1][j]^=resu[1][j+1];
			}
		}
	}
	for(i=0;i<indexji;i++){
		printf("%d ",resu[1][i]);
	}
	puts("");



}

int main(int argc, const char *argv[])
{
	int arr[] = {1,2,3,432,23,542,45,2,44,55,532,324,432,46,54,7,4,34,5,7,563,2};
	len = sizeof(arr)/sizeof(arr[0]);
	int resu[2][len];
	fenleipaixu(arr,len,resu);
	return 0;
}
