#define _CRT_SECURE_NO_WARNINGS 1;
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu() {
	printf("======欢迎来到猜数字游戏！======\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("=============================\n");
}

void game() {
	int r = rand() % 100 + 1;
	int guess = 0;
	int count = 10;
	printf("请输入你猜的数字（1-100）：");
	while (1) {
		scanf("%d", &guess);
		if (guess < r) {
			printf("太小了，请重新输入：");
			count--;
			printf("你还有%d次机会。\n", count);

		}
		else if (guess > r) {
			printf("太大了，请重新输入：");
			count--;
			printf("你还有%d次机会。\n", count);
		}
		else {
			printf("恭喜你，猜对了！\n");
			break;
		}
		if (count == 0) {
			printf("很遗憾，你没有猜对，正确答案是%d。\n", r);
			break;
		}
	}
}



int main() {

	int input;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}
