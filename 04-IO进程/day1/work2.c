#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	FILE *fp = fopen("Time.txt","a+");
	if(NULL == fp){
	perror("fopen");
	return -1;
	}
	int linecount = 0;
	while(NULL != fgets(line,sizeof(line),fp)){
			linecount++;
			}
	time_t  currenTime;
	struct tm* timeInfo;
	char timeString[20];

	while(1){
		time(&currenTime);
		timeInfo = localtime(&currenTime);
		strftime(timeString,sizeof(timeString),"%Y-%m-%d %H:%M:%S",timeInfo);
		linecount++;

		fprintf(fp," %d, %s\n", linecount,timeString);
		fflush(fp);

		sleep(1);

	}
	fclose(fp);

	return 0;
}
