/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：09_enum.c
*   创 建 者：JiangCX
*   创建日期：2023年08月08日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

typedef enum led{
	LED1,
	LED2,
	LED3
}led_t;

typedef enum{
	ON,
	OFF
}sta_t;


void ctrl_led(led_t led, sta_t sta);

int main()
{
	ctrl_led(LED1, ON);
	ctrl_led(LED2, OFF);
	ctrl_led(LED3, ON);

	return 0;
}

void ctrl_led(led_t led, sta_t sta)
{
	switch(led){
		case LED1:
			!sta ? printf("LED1 ON\n") : printf("LED1 OFF\n");
			break;
		case LED2:
			!sta ? printf("LED2 ON\n") : printf("LED2 OFF\n");
			break;
		case LED3:
			!sta ? printf("LED3 ON\n") : printf("LED3 OFF\n");
			break;
	}
}
