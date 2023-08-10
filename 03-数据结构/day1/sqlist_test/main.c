#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sqlist.h"

int main(int argc, const char *argv[])
{
	
	sqlist_t *sqlist = sqlistCreate();
	if(NULL == sqlist){
		printf("failed...\n");
		return -1;
	}
	printf("sqlist create success...\n");
	/*
	
	printf("lenth = %d\n",sqlistGetLength(sqlist));
	printf("Full = %d\n",sqlistIsFull(sqlist));
	printf("empty = %d\n",sqlistIsEmpty(sqlist));
	
	int i = 0;
	for(;i<10; i++){
	sqlistInsertPos(sqlist,i+1,0);
	}
	sqlistShow(sqlist);
	sqlistInsertPos(sqlist,55,10);
	sqlistInsertPos(sqlist,53,4);
	sqlistShow(sqlist);
	sqlistDeletePos(sqlist,7);
	sqlistShow(sqlist);
	sqlistDeletePos(sqlist,10);
	sqlistShow(sqlist);
	printf("lenth = %d\n",sqlistGetLength(sqlist));
	printf("empty = %d\n",sqlistIsEmpty(sqlist));
	*/

	int choice,pos;
	data_t data,olddata;

	do{
		printf(" --------- menu-------------- \n");
		printf("1. 查看顺序表\n");
		printf("2. 按位置插入\n");
		printf("3. 按位置删除\n");
		printf("31.按数据删除\n");
		printf("4. 按数据查找\n");
		printf("41.按位置查找\n");
		printf("5. 按数据更新数据\n");
		printf("51.按位置更新数据\n");
		printf("6. 清空数据\n");
		printf("7. 查看表长\n");
		printf("8. 排序\n");
		printf("0. 销毁表并退出");
		printf("\n---------------------------- \n");
		printf("选择你要进行的操作并回车\n-->: ");
		scanf("%d",&choice);

		switch (choice){
		case 1:
			sqlistShow(sqlist);
			break;
		case 2:
			printf("输入你想插入的数字和位置: ");
			scanf("%d%d",&data,&pos);
			if(!sqlistInsertPos(sqlist,data,pos))
			printf("插入成功\n");
			break;
		case 3:
			printf("输入你想删除数据的位置: ");
			scanf("%d",&pos);
			if(!sqlistDeletePos(sqlist,pos))
			printf("删除成功\n");
			break;
		case 31:
			printf("输入你想删除的数: ");
			scanf("%d",&data);
			if(!sqlistDeleteData(sqlist,data))
			printf("删除成功\n");
			break;
		case 4:
			printf("输入你想查找的数: ");
			scanf("%d",&data);
			sqlistResachData(sqlist,data);
			break;
		case 41:
			printf("输入你想查找数据的位置: ");
			scanf("%d",&pos);
			sqlistResachPos(sqlist,pos);
			break;
		case 5:
			printf("输入你想更改的数和想改为: ");
			scanf("%d%d",&olddata,&data);
			if(!sqlistUpdateData(sqlist, olddata, data))
			printf("更改成功\n");
			break;
		case 51:
			printf("输入你想更改的位置和想改为: ");
			scanf("%d%d",&pos,&data);
			if(!sqlistUpdatePos(sqlist,pos, data))
			printf("更改成功\n");
			break;
		case 6:
			if(!sqlistClrar(sqlist))
			printf("数据已清空\n");
			break;
		case 7:
			printf("lenth = %d\n",sqlistGetLength(sqlist));
			break;
		case 8:
			if(!sqlistSort(sqlist)){
			printf("排序成功\n");
			sqlistShow(sqlist);
			}
			break;
		case 0:
			if(!sqlistDestroy(&sqlist))
			printf("销毁成功并退出\n");
			break;
		default:
			printf("err, please try again\n");
			break;
		}

	}while(choice!=0);
	
	return 0;
}
