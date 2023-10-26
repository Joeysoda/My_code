#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


//游戏界面函数
void menu() 
{
			printf("*******************************\n");
			printf("*********    1.play     ******* \n");
			printf("*********    0.exit     *******\n");
			printf("*******************************\n");
}


//猜数字游戏实现
void game()
{
	//1.生成随机数(1~100)


	int ret = rand()%100+1;

	 
	//2.猜数字

	int guess;
	while (1)
	{
		printf("猜数字");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if(guess>ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}


int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;

	do 
	{
		menu();
		printf("选择: ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while ( input);
	return 0;
}


