#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXNUM 100

typedef struct Stu {
	int id;
	char name[30];
	int age;
	char sex;
}stu;

void Addstu(stu stud[], int *count)
{
	int i;
		if(*count < MAXNUM){
		stu newstu;
		printf("input ID-->:");
		scanf("%d",&newstu.id);
		for(i=0;i<*count;i++){
			if( stud[i].id==newstu.id){
				printf("ID have cunzai\n");
				return;
			}
		}

		printf("input Name-->:");
		scanf("%s",newstu.name);
		printf("input Age-->:");
		scanf("%d",&newstu.age);
		printf("input Sex-->:");
		getchar();
		scanf("%c",&newstu.sex);
		
		stud[*count] = newstu;
		printf("%d Add sucesfull\n",stud[*count].id);
		(*count)++;
	}else{
		printf("ren tai duo le,cun bu xia\n");
	}
	
}

void Dele(stu stud[], int *count, int studentId )
{
	int i,found = 0;
	for(i=0;i<*count;i++){
		if(stud[i].id == studentId){
			found = 1;
			break;
		}
	}
	if(found){
		for(;i<*count;i++){
			stud[i] = stud[i+1];
		}
		(*count)--;
		printf("dele %d student\n",studentId);
	}else{
		printf("student%d not found\n",studentId);
	}
}

void Update(stu stud[], int count, int studentId)
{
	int i,found = 0;
	for(i=0;i<count;i++){
		if(stud[i].id == studentId){
			found = 1;
			break;
		}

	}
	if(found){
		printf("input new ID-->:");
		scanf("%d",&stud[i].id);
		printf("input new Name-->:");
		scanf("%s",stud[i].name);
		printf("input new  Age-->:");
		scanf("%d",&stud[i].age);
		printf("input Sex-->:");
		getchar();
		scanf("%c",&stud[i].sex);
	
	}else{
		printf("student no dound\n");
	}
	
}
void Search(stu stud[], int count, int studentId)
{
	int i,found = 0;
	for(i=0;i<count;i++){
		if(stud[i].id == studentId){
			found = 1;
			break;
		}
	}
	if(found){
		printf("\nID:%d\n",stud[i].id);
		printf("name is: %s\n",stud[i].name);
		printf("age is : %d\n",stud[i].age);
		printf("sex is : %c\n",stud[i].sex);
	}else{
		printf("no found\n");
	}
}

void Show(stu stud[],int count)
{
	int i;
	for(i=0;i<count;i++){
		printf("\nID:%d\n",stud[i].id);
		printf("name is: %s\n",stud[i].name);
		printf("age is : %d\n",stud[i].age);
		printf("sex is : %c\n",stud[i].sex);
		
		printf("_________________\n");

	}
		
}

int main(int argc, const char *argv[])
{
	stu student[MAXNUM];
	int count = 0;
	int choice,studentId;

	do{
		printf("\n--------- menu-------------- \n");
		printf("1. Add student\n");
		printf("2. Dele student\n");
		printf("3. Update student\n");
		printf("4. Search student\n");
		printf("5. show student\n");
		printf("0. Exit");
		printf("\n---------------------------- \n");
		printf("please choice-->: ");
		scanf("%d",&choice);

		switch (choice){
		case 1:
			Addstu(student,&count);
			break;
		case 2:
			printf("input ID as you want to dele: ");
			scanf("%d",&studentId);
			Dele(student,&count,studentId);
			break;
		case 3:
			printf("input ID as you want to update: ");
			scanf("%d",&studentId);
			Update(student,count,studentId);
			break;
		case 4:
			printf("input ID as you want to search: ");
			scanf("%d",&studentId);
			Search(student,count,studentId);
			break;
		case 5:
			Show(student, count);
			break;
		case 0:
			printf("EXIT...\n");
			break;
		default:
			printf("err, please try again\n");
			break;
		}

	}while(choice!=0);
	
	return 0;
}
