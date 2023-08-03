#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char *language[] = {"FORTRAN","BASIC","PASCAL","JAVA","C"};
	
	char **q = language;

	char ***k = &q;
//q = language + 2;
//printf("%o\n", *q);

	printf("%c\n", *(*(*k+3)+2));

	printf("%s\n", language[0]);
	printf("%s\n", *(language));
	printf("%s\n", *(language+1));
	
	printf("%s\n", q[0]);
	printf("%s\n", *q);
	printf("%s\n", *(q+1));

	printf("%c\n", **language);
	printf("%c\n", *(*language+3));

	printf("%c\n",   *(*(language+2)+2) );
	return 0;
}
